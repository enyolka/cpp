//
// Created by emilia on 13.05.19.
//

#include "StudentRepository.h"

void StudentRepository::AddStudent(Student s) {
    repo.push_back(s);
}

std::vector<Student> StudentRepository::Submit(const StudentComparator &compare) {
    std::vector<Student> result;
    if(compare.IsLess(repo[0], repo[1])){
        result.push_back(repo[0]);
        result.push_back(repo[1]);
    }else {
        result.push_back(repo[1]);
        result.push_back(repo[0]);
    }
    return result;
}
