//
// Created by emilia on 12.05.19.
//

#ifndef QUERY_QUERY_H
#define QUERY_QUERY_H

#include <iostream>
#include <memory>
#include "Student.h"


class Query {
public:
    virtual bool Accept(const Student& student) const = 0;
};

class ByFirstName : public Query{
    std::string first_nameq;
public:
    ByFirstName(std::string first_nameq_ = "Jan"): first_nameq(first_nameq_) {}
    ~ByFirstName() = default;
    bool Accept(const Student& student) const override ;
};

class ByLastName : public Query{
    std::string last_nameq;
public:
    ByLastName(std::string last_nameq_ = "Kowalski"): last_nameq(last_nameq_) {}
    ~ByLastName() = default;
    bool Accept(const Student& student) const override ;
};

class ByOneOfPrograms : public Query{
    std::vector<std::string> programsq;
public:
    ByOneOfPrograms(std::vector<std::string> programsq_): programsq(programsq_) {}
    ~ByOneOfPrograms() = default;
    bool Accept(const Student& student) const override ;
};

class ByYearLowerOrEqualTo : public Query{
    StudyYear yearq;
public:
    ByYearLowerOrEqualTo(StudyYear yearq_ = 0): yearq(yearq_) {}
    ~ByYearLowerOrEqualTo() = default;
    bool Accept(const Student& student) const override ;
};


class OrQuery : public Query{
    std::unique_ptr<Query> left;
    std::unique_ptr<Query> right;
public:
    OrQuery(std::unique_ptr<Query> left_, std::unique_ptr<Query> right_): left(std::move(left_)), right(std::move(right_)){}
    ~OrQuery() = default;
    bool Accept(const Student& student) const override;
};

class AndQuery : public Query{
    std::unique_ptr<Query> left;
    std::unique_ptr<Query> right;
public:
    AndQuery(std::unique_ptr<Query> left_, std::unique_ptr<Query> right_): left(std::move(left_)), right(std::move(right_)){}
    ~AndQuery() = default;
    bool Accept(const Student& student) const override;
};


#endif //QUERY_QUERY_H
