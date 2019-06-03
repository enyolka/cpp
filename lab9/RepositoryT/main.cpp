#include <iostream>
#include <vector>
#include "Query.h"
#include "Repository.h"
#include "Student.h"

int main() {
    auto* Repo = new Repository<Student>;

    Student s1("11", "Ala", "Ok",2);
    Student s2("121", "Ela", "aaa", 1);
    Student s3("000","Iza", "jp",3);

    Repo -> Add(s1);
    Repo -> Add(s2);
    Repo -> Add(s3);

    ByFirstName<Student> query("Ala");
    auto result = Repo -> FindBy(query);
     for(auto& s: result)
        std::cout << s;

    return 0;
}