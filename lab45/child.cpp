#include <cstdlib>
#include <iostream>

class Child{
    std::string name;
    int age;
    std::string school;
    friend class Parent;
public:
    Child(){};
    Child(std::string, int, std::string);
    ~Child(){};
    void Print();
};

class Parent{
    std::string name;
    int age;
    Child child;
public:
    Parent();
    Parent(std::string, int, Child);
    ~Parent(){};
    void change_school(std::string);
    Child getChild(){return child;}
};
int main() {
    Child child1("imie", 13, "szkola");
    Parent parent1("IMIE", 40, child1);
    Child nowe_dziecko = parent1.getChild();
    nowe_dziecko.Print();

    return 0;
}

Child::Child(std::string name_, int age_, std::string school_) {
    this->name = name_;
    this->age = age_;
    this->school = school_;
}

void Child::Print() {
    std::cout << "Dane: " << name << '\t' << age << '\t' << school << std::endl;
}

Parent::Parent(std::string name_, int age_, Child child_) {
    this->name = name_;
    this->age = age;
    this->child = child_;
}

void Parent::change_school(std::string name) {
    child.school = name;
}