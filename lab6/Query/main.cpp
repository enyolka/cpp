#include <iostream>
#include <vector>
#include <memory>
#include "Student.h"
#include "Query.h"
#include "StudentRepository.h"


int main() {
    //***
    StudentRepository* rep = new StudentRepository();

    rep -> AddStudent(Student("111111","Kamil","Stoch","AiR",3));
    rep -> AddStudent(Student("999111","Jan","Kowalski","IB",1));

    ByFirstName kamil("Kamil");
    ByOneOfPrograms programs(std::vector<std::string> {"CS","AiR"});
/*
    auto kamil_ptr = std::make_unique<ByFirstName>(kamil);
    auto programs_ptr = std::make_unique<ByOneOfPrograms>(programs);

    OrQuery andquery(std::move(kamil_ptr),std::move(programs_ptr));

    auto result = rep -> FindByQuery(andquery);
*/
    auto result = rep->FindByQuery(kamil);

    for(auto s: result){
        std::cout << s << std::endl;
    }
    //***
    return 0;
}