//
// Created by emilia on 12.05.19.
//

#include "Query.h"


bool ByFirstName::Accept(const Student& student) const{
    return student.first_name == this->first_nameq;
}

bool ByLastName::Accept(const Student &student) const {
    return student.last_name == this->last_nameq;
}

bool ByOneOfPrograms::Accept(const Student &student) const {
    for(auto c: programsq)
        if(c == student.program)
            return true;
    return false;
}

bool ByYearLowerOrEqualTo::Accept(const Student &student) const {
    if(student.year <= yearq)
        return true;
    return false;
}

bool OrQuery::Accept(const Student &student) const {
    return left->Accept(student) || right->Accept(student);
}

bool AndQuery::Accept(const Student &student) const {
    return left->Accept(student) && right->Accept(student);
}