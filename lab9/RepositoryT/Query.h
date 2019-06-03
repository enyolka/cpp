//
// Created by emilia on 03.06.19.
//

#ifndef REPOSITORYT_QUERY_H
#define REPOSITORYT_QUERY_H


#include <iostream>
#include <memory>
#include "Student.h"

template<class T>
class Query {
public:
    virtual bool Accept(const T& element) const = 0;
};

template<class T>
class ByFirstName : public Query<T>{
    std::string first_nameq;
public:
    ByFirstName(std::string first_nameq_ = "Jan"): first_nameq(first_nameq_) {}
    ~ByFirstName() = default;
    bool Accept(const T& element) const override {
        return element.GetFirstName() == this->first_nameq;
    }
};

template<class T>
class ByLastName : public Query<T>{
    std::string last_nameq;
public:
    ByLastName(std::string last_nameq_ = "Kowalski"): last_nameq(last_nameq_) {}
    ~ByLastName() = default;
    bool Accept(const T& element) const override {
        return element.GetLastName() == this->last_nameq;
    }
};


#endif //REPOSITORYT_QUERY_H
