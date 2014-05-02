#ifndef _SREF_ZH_
#define _SREF_ZH_

//  Class for counted reference semantics
//  Deletes the object to which it refers when the last ref
//    that refers to it is destroyed

template <class T> class ref
{
private:
  T* ptr;        // Pointer to the value

public:
  explicit ref (T *p=0)
  {
    ptr = p;
  }

  template <typename U> ref (const ref<U> &p) throw()
  {
    ptr = p.ptr;
  }

  // Assignment (unshare old and share new value)
  ref<T> &operator = (const ref<T> &p) throw()
  {
    ptr = p.ptr;
    return *this;
  }

  // access the value to which the pointer refers
  T &operator * () const throw()
  {
    return *ptr;
  }

  T *operator -> () const throw()
  {
    return ptr;
  }

  bool is_null() const throw()
  {
    return ptr == 0;
  }

  template <typename U> friend class ref;
  template <typename T2, typename T1> friend ref<T2> downcast(const ref<T1> &p);
  template <typename T2, typename T1> friend bool has_type(const ref<T1> &p);
};


template <typename T2, typename T1> ref<T2> downcast(const ref<T1> &p)
{
  T2 *p2 = dynamic_cast<T2 *>(p.ptr);
  return ref<T2>(p2);
}

template <typename T2, typename T1> bool has_type(const ref<T1> &p)
{
  T2 *p2 = dynamic_cast<T2 *>(p.ptr);
  return p2 != NULL;
}


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


template <class T> class gc_ref
{
private:
  T* ptr;        // Pointer to the value
  long* count;   // Shared number of owners

public:
  // Initialize pointer with existing pointer
  // Requires that the pointer p is a return value of new
  explicit gc_ref (T *p=0)
  {
    ptr = p;
    count = p == 0 ? 0 : new long(1);
    //if (p != 0)
    //  cout << "ref counter created: " << count << ", " << *count << endl;
    //else
    //  ;
  }

  // Copy pointer (one more owner)
  gc_ref (const gc_ref &p) throw() : ptr(p.ptr), count(p.count)
  {
    if (count != 0)
      ++*count;
  }

  // Copy pointer (one more owner)
  template <typename U> gc_ref (const gc_ref<U> &p) throw() : ptr(p.ptr), count(p.count)
  {
    if (count != 0)
      ++*count;
  }

  // Destructor (delete value if this was the last owner)
  ~gc_ref () throw()
  {
    dispose();
  }

  // Assignment (unshare old and share new value)
  gc_ref<T> &operator = (const gc_ref<T> &p) throw()
  {
    if (this != &p)
    {
      dispose();
      ptr = p.ptr;
      count = p.count;
      if (count != 0)
        ++*count;
    }

    return *this;
  }

  // access the value to which the pointer refers
  T &operator * () const throw()
  {
    return *ptr;
  }

  T *operator -> () const throw()
  {
    return ptr;
  }

  bool is_null() const throw()
  {
    return ptr == 0;
  }

private:
  explicit gc_ref (T *p, long *c) : ptr(p), count(c)
  {
    if (count != 0)
      ++*count;
  }

  void dispose()
  {
    if (count != 0)
      if (--*count == 0)
      {
        //cout << "ref counter destroyed: " << count << endl;
        
        delete count;
        delete ptr;
        
        count = 0;
        ptr = 0;
      }
  }

  template <typename U> friend class gc_ref;
  
  template <typename T1, typename T2> friend gc_ref<T2> downcast(const gc_ref<T1> &p);
  template <typename T2, typename T1> friend bool has_type(const gc_ref<T1> &p);
};

template <typename T2, typename T1> gc_ref<T2> downcast(const gc_ref<T1> &p)
{
  T2 *p2 = dynamic_cast<T2 *>(p.ptr);
  return gc_ref<T2>(p2, p.count);
}

template <typename T2, typename T1> bool has_type(const gc_ref<T1> &p)
{
  T2 *p2 = dynamic_cast<T2 *>(p.ptr);
  return p2 != NULL;
}


#endif