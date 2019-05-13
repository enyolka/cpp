//
// Created by emilia on 12.05.19.
//

#include "Student.h"

StudyYear::operator int() const{
    return *this;
}
StudyYear& StudyYear::operator++(){
    ++year;
    return *this;
}
StudyYear StudyYear::operator++(int){
    StudyYear tmp = (*this);
    ++year;
    return tmp;
}
bool StudyYear::operator==(const StudyYear& other){
    return year == other.year;
}
bool StudyYear::operator<(const StudyYear& other){
    return year < other.year;
}


std::ostream& operator <<(std::ostream& out, const StudyYear& other){
    out << other.year << " year " << std::endl;
    return out;
}
std::istream& operator >>(std::istream& in, StudyYear& other){
    std::cout << " Enter a year: ";
    in >> other.year;
    return in;
}

std::ostream& operator <<(std::ostream& output, const Student& other){
    output << "ID: " << other.id << " Name: " << other.first_name << " " << other.last_name << " Program: "<< other.program << " Study year: "<< other.year << std::endl;
    return output;
}
std::istream& operator >>(std::istream& input, Student& other){
    std::cout << " Enter id: ";
    input >> other.id;
    std::cout << " Enter name: ";
    input >> other.first_name;
    input >> other.last_name;
    std::cout << " Enter program: ";
    input >> other.program;
    std::cout << " Enter a year: ";
    input >> other.year;
    return input;
}
