//
// Created by emilia on 13.05.19.
//

#ifndef STUDENTCOMPARATOR_STUDENTREPOSITORY_H
#define STUDENTCOMPARATOR_STUDENTREPOSITORY_H

#include <iostream>
#include <vector>
#include "Student.h"
#include "StudentComparator.h"

class StudentRepository{
    std::vector<Student> repo;
public:
    StudentRepository() = default;
    ~StudentRepository() = default;

    void AddStudent(Student s);
    std::vector<Student> Submit(const StudentComparator& compare);

};

#endif //STUDENTCOMPARATOR_STUDENTREPOSITORY_H
