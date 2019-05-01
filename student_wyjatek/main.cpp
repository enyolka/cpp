#include <iostream>
#include "Student.h"

int main() {

    Student s1("Ola", 20, "polski");
    Student s2("ala", 12, "informatyka");
    Student s3("Ela", 2, "matematyka");

    try{
        s1.ValidateStudent();
    }
    catch(NameException a){
        std::cout<< "Blad w imieniu! "<< std::endl;
    }catch(AgeException b){
        std::cout<< "Bledny wiek! "<< std::endl;
    }catch(ProgramException c){
        std::cout<< "Nie ma takiego kierunku! "<< std::endl;
    }

    return 0;
}