//
// Created by emilia on 12.05.19.
//

#include "Student.h"


std::ostream& operator <<(std::ostream& output, const Student& other){
    output << "ID: " << other.id << " Name: " << other.first_name << " " << other.last_name << " Program: "<< other.program << std::endl;
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
    return input;
}

