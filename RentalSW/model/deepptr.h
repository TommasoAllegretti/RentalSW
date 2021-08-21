#ifndef DEEPPTR_H
#define DEEPPTR_H

#include <iostream>

template <class T>
class DeepPtr
{
private:
    T* info;
public:
    DeepPtr(T* = nullptr);
    DeepPtr(const DeepPtr&);
    ~DeepPtr();

    DeepPtr<T>& operator=(const DeepPtr<T>&);

    T& operator*();
    const T& operator*() const;

    T* operator->();
    const T* operator->() const;

    T& operator[](unsigned int);
    const T& operator[](unsigned int) const;

    T* get();
    const T* get() const;

    void reset(T* = new T);

    explicit operator bool() const;

    T* release();

    void swap(DeepPtr&);

};

template <class T>
std::ostream& operator<<(std::ostream& os, const DeepPtr<T>& d){
    return os << *d;
}

#endif // DEEPPTR_H
