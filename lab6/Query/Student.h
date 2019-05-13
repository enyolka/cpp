//
// Created by emilia on 12.05.19.
//

#ifndef QUERY_STUDENT_H
#define QUERY_STUDENT_H

#include <iostream>
#include <string>
#include <vector>


class StudyYear {
    int year;
public:
    StudyYear() : year(0) {}
    StudyYear(int year_): year(year_) {}
    ~StudyYear() = default;

    operator int() const;
    bool operator==(const StudyYear&);
    bool operator<(const StudyYear&);
    StudyYear& operator++();
    StudyYear operator++(int);

    friend std::ostream& operator <<(std::ostream&, const StudyYear&);
    friend std::istream& operator >>(std::istream&, StudyYear&);
};

class Student{
public:
    std::string id, first_name, last_name, program;
    StudyYear year;
    Student(): id("0"), first_name("Jan"), last_name("Kowalski"), program("null"){};
    Student(std::string id_, std::string first_name_, std::string last_name_, std::string program_, StudyYear year_):
    id(id_), first_name(first_name_), last_name(last_name_), program(program_), year(year_){}
    ~Student() = default;

    friend std::ostream& operator <<(std::ostream&, const Student&);
    friend std::istream& operator >>(std::istream&, Student&);
};


#endif //QUERY_STUDENT_H
