//
// Created by emilia on 03.06.19.
//

#ifndef REPOSITORYT_REPOSITORY_H
#define REPOSITORYT_REPOSITORY_H


#include <iostream>
#include <algorithm>
#include <vector>
#include <initializer_list>
#include "Query.h"
#include "Student.h"

template<class T>
class Repository {
    std::vector<T> data;
    size_t size;
    size_t capacity;
public:
    explicit Repository(std::vector<T> origin): data(origin) {}
    Repository(const std::initializer_list<T> &elements);
    Repository() = default;
    ~Repository() = default;

    size_t Size() const;
    const T& operator[](size_t index) const;
    T& NextId(size_t index);
    std::vector<T> FindBy(Query<T>& query);
    void Add(T& el);
    void Add(T&& el);
};

template<class T>
Repository<T>::Repository(const std::initializer_list<T> &elements) {
    /* Reserve(elements.size());
     int i = 0;
     for(auto el: elements)
         elements(i++) = el;
     size = elements.size(); */
    for(auto el: elements)
        data.push_back(el);
}

template<class T>
size_t Repository<T>::Size() const {
    return size;
}

template<class T>
const T& Repository<T>::operator[](size_t index) const {
    return data[index];
}

template<class T>
T& Repository<T>::NextId(size_t index) {
    return data[index+1];
}

template<class T>
std::vector<T> Repository<T>::FindBy(Query<T>& query) {
    std::vector<T> result;
    for(auto elem: data)
        if(query.Accept(elem))
            result.push_back(elem);
    return result;
}

template <class T>
void Repository<T>::Add(T& el){
    data.push_back(el);
}

template <class T>
void Repository<T>::Add(T&& el){
    data.push_back(el);
}

#endif //REPOSITORYT_REPOSITORY_H
