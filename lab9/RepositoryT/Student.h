//
// Created by emilia on 03.06.19.
//

#ifndef REPOSITORYT_STUDENT_H
#define REPOSITORYT_STUDENT_H

#include <iostream>
#include <string>
#include <vector>


class Student {
    std::string id, first_name, last_name;
    int year;

public:
    Student() = default;
    Student(std::string id_, std::string first_name_, std::string last_name_,int year_):id(id_), first_name(first_name_), last_name(last_name_), year(year_){}
    ~Student() = default;

    std::string GetFirstName() const;
    std::string GetLastName() const;

    friend std::ostream& operator<<(std::ostream& os, const Student& student);
};

#endif //REPOSITORYT_STUDENT_H
