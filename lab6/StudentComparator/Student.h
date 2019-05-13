//
// Created by emilia on 12.05.19.
//

#ifndef STUDENTCOMPARATOR_STUDENT_H
#define STUDENTCOMPARATOR_STUDENT_H


#include <iostream>
#include <string>
#include <vector>


class Student{
public:
    std::string id, first_name, last_name, program;
    Student(): id("0"), first_name("Jan"), last_name("Kowalski"), program("null"){};
    Student(std::string id_, std::string first_name_, std::string last_name_, std::string program_):
            id(id_), first_name(first_name_), last_name(last_name_), program(program_){}
    ~Student() = default;

    friend std::ostream& operator <<(std::ostream&, const Student&);
    friend std::istream& operator >>(std::istream&, Student&);

    //bool operator<(const Student&);
   // bool operator>(const Student&);
};


#endif //STUDENTCOMPARATOR_STUDENT_H
