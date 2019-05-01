//
// Created by emilia on 01.05.19.
//

#include "Student.h"

/*std::ostream& operator <<(std::ostream& output, const Student& other){
    output << "ID: " << other.id << " Name: " << other.name << " Program: "<< other.program << std::endl;
    return output;
}
std::istream& operator >>(std::istream& input, Student& other){
    std::cout << " Enter id: ";
    input >> other.id;
    std::cout << " Enter name: ";
    input >> other.name;
    std::cout << " Enter program: ";
    input >> other.program;
    return input;
}*/


void Student::ValidateStudent() {
    if(!(name[0] >= 65 && name[0] <= 90)) throw NameException();
    for(int i = 1; i < name.size(); i++) {
        if (!(name[i] >= 91 && name[i] <= 122)) throw NameException();
    }

    if(!(age >= 10 && age <= 100)) throw AgeException();

    if(!(program == "informatyka" || program == "ekonomia" || program == "matematyka" || program == "fizyka" || program == "filozofia")) throw ProgramException();
}