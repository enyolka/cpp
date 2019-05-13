#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
#include "StudentRepository.h"
#include "StudentComparator.h"

int main() {
    StudentRepository* rep = new StudentRepository();

    rep -> AddStudent(Student("111111","Kamil","Stoch","AiR"));
    rep -> AddStudent(Student("999111","Jan","Kowalski","IB"));

    ByFirstNameAscending kamil;
    ByLastNameDescending stoch;
    auto result = rep->Submit(stoch);

    for(auto s: result)
        std::cout << s << std::endl;

    return 0;
}