//
// Created by emilia on 12.05.19.
//

#ifndef QUERY_STUDENTREPOSITORY_H
#define QUERY_STUDENTREPOSITORY_H

#include <iostream>
#include "Student.h"
#include "Query.h"

class StudentRepository{
    std::vector<Student> repo;
public:
    StudentRepository() = default;
    ~StudentRepository() = default;

    void AddStudent(Student s);
    std::vector<Student> FindByQuery(const Query& query);

};

#endif //QUERY_STUDENTREPOSITORY_H
