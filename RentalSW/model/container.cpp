#include "container.h"

//costrttore di default
template <class T>
Container<T>::Container(): sz(0), info(T[1]) {}

//costruttore a 2 argomenti
template <class T>
Container<T>::Container(int elemN, T t): sz(elemN), info(new T[elemN]) {
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

