//
// Created by emilia on 03.06.19.
//

#ifndef ITERATOR2_VECTOR_H
#define ITERATOR2_VECTOR_H

#include <iostream>
//#include "Iterator.h"


template <class T>
class Vector {
    T *start, *end;
    int capacity;
    void Destroy();
    void Copy(const Vector<T> &other);
public:
    Vector(){start=0; end=0;  capacity=0;}
    Vector(const Vector<T> &other){Copy(other);}
    ~Vector(){Destroy();}

    int GetSize()const{return end-start;}
    int GetCapacity()const{return capacity;}
    void Reserve(size_t new_size);

    T &operator[](size_t i);
    Vector<T> &operator=(const Vector<T> &other);
    void PushBack(const T& elem);
    void Print();

    bool Get(T&t,int index)const  {

        if(index<0||index>=(end-start))return false;

        t= start[index];

        return true;

    }
    //friend class Iterator<T>;
};

template <class T>
Vector<T>& Vector<T>::operator=(const Vector<T> &other) {
    if(&other != this){
        Destroy();
        Copy(other);
    }
    return *this;
}

template<class T>
T & Vector<T>::operator[](size_t i) {
    return start[i];
}

template<class T>
void Vector<T>::Reserve(size_t new_size) {
    T* tmp = new T[new_size];
    if(capacity)
        for(int i=0; i < GetSize(); i++) {
            tmp[i] = start[i];
            delete [] start;
        }
    end = tmp + (end - start);
    capacity = new_size;
    start = tmp;
}

template<class T>
void Vector<T>::Destroy() {
    if(start)
        delete []start;
    start=0;
    capacity=0;
}

template<class T>
void Vector<T>::Copy(const Vector<T> &other) {
    start=end=0;
    capacity = 0;
    if(other.GetSize()){
        start = new T[other.capacity];
        capacity = other.capacity;
        for(int i =0; i < other.GetSize(); i++)
            start[i] = other.start[i];
        end = start + other.GetSize();
    }
}

template<class T>
void Vector<T>::PushBack(const T &elem) {
    *end = elem;
    end++;
}

template <class T>
void Vector<T>::Print() {
    for(int i=0; i < GetSize(); i++)
        std::cout << start[i];
}
#endif //ITERATOR2_VECTOR_H
