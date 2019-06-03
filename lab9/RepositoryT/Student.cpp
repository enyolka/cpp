//
// Created by emilia on 03.06.19.
//

#include "Student.h">

std::string Student::GetFirstName() const {
    return this -> first_name;
}

std::string Student::GetLastName() const {
    return this -> last_name;
}


std::ostream &operator<<(std::ostream &os, const Student &student) {
    os << student.id << " " << student.first_name << " " << student.last_name << " " << student.year;
    return os;
}
