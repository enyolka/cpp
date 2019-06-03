//
// Created by emilia on 03.06.19.
//

#ifndef ITERATOR2_ITERATOR_H
#define ITERATOR2_ITERATOR_H

#include "Vector.h"

template <class T>
class Iterator {
    const Vector<T> &vec;
    T* current;
public:
    Iterator(const Vector<T> &vec_): vec(vec_), current(vec_.start){}
    Iterator &operator++(){
        current++;
        return *this;
    }
    Iterator &operator--(){
        current--;
        return *this;
    }
    operator bool()const{
        return current< vec.end();
    }
    T& get()const{
        return *current;
    }
};


#endif //ITERATOR2_ITERATOR_H
