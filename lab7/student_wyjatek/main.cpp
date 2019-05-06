#include <iostream>
#include <vector>
#include "Student.h"

int main() {
    std::vector<Student> repo;
    int flag;

    for(int i=0; i<4; i++) {
        flag = 0;
        Student s1;
        std::cin >> s1;
        try{
            s1.ValidateStudent();
        }
        catch(NameException a){
            std::cout<< "Blad w imieniu! "<< std::endl;
            flag = 1;
        }catch(AgeException b){
            std::cout<< "Bledny wiek! "<< std::endl;
            flag = 1;
        }catch(ProgramException c){
            std::cout<< "Nie ma takiego kierunku! "<< std::endl;
            flag = 1;
        }
        if(flag == 0) repo.push_back(s1);
    }

    for(auto x: repo){
        std::cout << x ;
    }

    return 0;
}