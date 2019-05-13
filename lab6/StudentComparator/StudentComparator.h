//
// Created by emilia on 12.05.19.
//

#ifndef STUDENTCOMPARATOR_STUDENTCOMPARATOR_H
#define STUDENTCOMPARATOR_STUDENTCOMPARATOR_H

#include <iostream>
#include <string>
#include "Student.h"

using ::std::string;

class StudentComparator {
public:
    virtual bool IsLess(const Student &left, const Student &right) const = 0;
};


class ByFirstNameAscending : public StudentComparator{
public:
    ByFirstNameAscending(): StudentComparator() {}
    ~ByFirstNameAscending() = default;
    bool IsLess(const Student &left, const Student &right) const override;
};

class ByFirstNameDescending : public StudentComparator{
public:
    ByFirstNameDescending(): StudentComparator() {}
    ~ByFirstNameDescending() = default;
    bool IsLess(const Student &left, const Student &right) const override;
};

class ByLastNameAscending : public StudentComparator{
public:
    ByLastNameAscending(): StudentComparator() {}
    ~ByLastNameAscending() = default;
    bool IsLess(const Student &left, const Student &right) const override;
};

class ByLastNameDescending : public StudentComparator{
public:
    ByLastNameDescending(): StudentComparator() {}
    ~ByLastNameDescending() = default;
    bool IsLess(const Student &left, const Student &right) const override;
};

class ByProgramAscedingEmptyFirst : public StudentComparator{
public:
    ByProgramAscedingEmptyFirst(): StudentComparator() {}
    ~ByProgramAscedingEmptyFirst() = default;
    bool IsLess(const Student &left, const Student &right) const override;
};

class ByProgramAscedingEmptyLast : public StudentComparator{
public:
    ByProgramAscedingEmptyLast(): StudentComparator() {}
    ~ByProgramAscedingEmptyLast() = default;
    bool IsLess(const Student &left, const Student &right) const override;
};

#endif //STUDENTCOMPARATOR_STUDENTCOMPARATOR_H
