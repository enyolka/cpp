//
// Created by emilia on 12.05.19.
//

#include "StudentRepository.h"


void StudentRepository::AddStudent(Student s) {
    repo.push_back(s);
}

std::vector<Student> StudentRepository::FindByQuery(const Query &query) {
    std::vector<Student> result;
    for(auto s: repo)
        if(query.Accept(s))
            result.push_back(s);
    return result;
}

