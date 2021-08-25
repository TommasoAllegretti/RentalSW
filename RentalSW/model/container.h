#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>

template <class T>
class Container {
private:
    T* info;
    unsigned int sz;
public:
    Container();
    Container(unsigned int, T);
    Container(const Container&);
    ~Container();

    class iterator{
    private:
        T* p;
    public:
        iterator();
        iterator(T*);

        iterator operator++(int);
        iterator& operator++();

        iterator operator--(int);
        iterator& operator--();

        bool operator==(const iterator&) const;
        bool operator!=(const iterator&) const;

        T& operator*() const;
        T* operator->() const;
    };

    class const_iterator{
        private:
            iterator iter;
        public:
            const_iterator();
            const_iterator(const iterator&);
            const_iterator(T*);

            const_iterator operator++(int);
            const_iterator& operator++();

            const_iterator operator--(int);
            const_iterator& operator--();

            bool operator==(const const_iterator&) const;
            bool operator!=(const const_iterator&) const;

            const T& operator*() const;
            const T* operator->() const;
        };

    unsigned int size() const;

    Container<T>& operator=(const Container<T>&);

    iterator begin();
    iterator end();

    const_iterator cbegin();
    const_iterator cend();

    T& operator[](unsigned int);
    const T& operator[](unsigned int) const;

    void push_back(const T&);
    void pop_back();
    void erase(int);
    void erase(iterator, iterator);
    void clear();
};

template <class T>
std::ostream& operator<<(std::ostream& os, const Container<T>& c){
    for(typename Container<T>::const_iterator cit = c.begin(); cit != c.end(); cit++){
        os << *cit << std::endl;
    }
    return os;
}

#endif // CONTAINER_H
