//
// Created by emilia on 01.05.19.
//

#ifndef STUDENT_WYJATEK_STUDENT_H
#define STUDENT_WYJATEK_STUDENT_H

#include <iostream>
#include <string>

class Student {
    std::string name;
    int age;
    std::string program;
public:
    Student() = default;
    Student(std::string name_, int age_, std::string program_):name(name_), age(age_), program(program_) {}
    ~Student() = default;
    //friend std::ostream& operator <<(std::ostream&, const Student&);
    //friend std::istream& operator >>(std::istream&, Student&);

    void ValidateStudent();
};

class StudentException{};
class NameException : public StudentException{};
class AgeException : public StudentException{};
class ProgramException : public StudentException{};


#endif //STUDENT_WYJATEK_STUDENT_H
