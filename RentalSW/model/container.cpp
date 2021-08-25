#include "container.h"

//costrttore di default
template <class T>
Container<T>::Container(): sz(0), info(new T[1]) {}

//costruttore a 2 argomenti
template <class T>
Container<T>::Container(unsigned int elemN, T t): sz(elemN), info(new T[elemN]) {
    for(int i = 0; i<sz; i++){
        info[i] = t;
    }
}

//costruttore di copia
template <class T>
Container<T>::Container(const Container& c): sz(c.sz), info(new T[sz]) {
    for(int i = 0; i<sz; i++){
        info[i] = c.info[i];
    }
}

//distruttore
template <class T>
Container<T>::~Container<T>() {
    delete info;
}

template <class T>
Container<T>& Container<T>::operator=(const Container<T>& c){
    if(this!=&c){
        delete[] info;
        sz = c.sz;
        info = new T[sz];
        for(int i=0; i<sz; i++)
            info[i] = c.info[i];
    }
    return *this;
}

template <class T>
Container<T>::iterator::iterator(): p(nullptr) {}

template <class T>
Container<T>::iterator::iterator(T* t): p(t) {}

template <class T>
typename Container<T>::iterator Container<T>::iterator::operator++(int){
    Container<T>::iterator it = *this;
    p++;
    return it;
}

template <class T>
typename Container<T>::iterator& Container<T>::iterator::operator++(){
    ++p;
    return *this;
}

template <class T>
typename Container<T>::iterator Container<T>::iterator::operator--(int){
    Container<T>::iterator it = *this;
    p--;
    return it;
}

template <class T>
typename Container<T>::iterator& Container<T>::iterator::operator--(){
    --p;
    return *this;
}

template <class T>
bool Container<T>::iterator::operator==(const Container<T>::iterator& it) const {
    return p == it.p;
}

template <class T>
bool Container<T>::iterator::operator!=(const Container<T>::iterator& it) const {
    return p != it.p;
}

template <class T>
T& Container<T>::iterator::operator*() const {
    return *p;
}

template <class T>
T* Container<T>::iterator::operator->() const {
    return p;
}

//CONST_ITERATOR
//costruttore di default
template <class T>
Container<T>::const_iterator::const_iterator(): iter(nullptr, false) {}

//costruttore di copia
template <class T>
Container<T>::const_iterator::const_iterator(const iterator& it): iter(it) {}


template <class T>
Container<T>::const_iterator::const_iterator(T* t): iter(t) {}

template <class T>
typename Container<T>::const_iterator Container<T>::const_iterator::operator++(int){
    Container<T>::const_iterator it = *this;
    iter++;
    return it;
}

template <class T>
typename Container<T>::const_iterator& Container<T>::const_iterator::operator++(){
    ++iter;
    return *this;
}

template <class T>
typename Container<T>::const_iterator Container<T>::const_iterator::operator--(int){
    Container<T>::const_iterator it = *this;
    iter--;
    return it;
}

template <class T>
typename Container<T>::const_iterator& Container<T>::const_iterator::operator--(){
    --iter;
    return *this;
}

template <class T>
bool Container<T>::const_iterator::operator==(const Container<T>::const_iterator& it) const {
    return iter == it.iter;
}

template <class T>
bool Container<T>::const_iterator::operator!=(const Container<T>::const_iterator& it) const {
    return iter != it.iter;
}

template <class T>
const T& Container<T>::const_iterator::operator*() const {
    return iter.operator *();
}

template <class T>
const T* Container<T>::const_iterator::operator->() const {
    return iter.operator ->();
}

template <class T>
unsigned int Container<T>::size() const { return sz; }

template <class T>
typename Container<T>::iterator Container<T>::begin(){ //controllare
    return info;
}







