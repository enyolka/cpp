#include <iostream>

class StudyYear{
	int year;
public:
	StudyYear(): year(0){}
	StudyYear(int year_){this->year = year_;}
	~StudyYear(){}
	
	friend std::ostream& operator <<(std::ostream&, const StudyYear&);
	friend std::istream& operator >>(std::istream&, StudyYear&);
	
	
	StudyYear& operator++(){
		++year;
		return *this;
	}
	
	StudyYear operator++(int){
		StudyYear tmp = (*this);
		++year;
		return tmp;
	}
	
};

std::ostream& operator <<(std::ostream& out, const StudyYear& other){
	out << other.year << " year " << std::endl;
	return out;
}
std::istream& operator >>(std::istream& in, StudyYear& other){
	std::cout << " Enter a year: ";
	in >> other.year;
	return in;
}

class Student{
	std::string id, name, program;
	StudyYear year;
public:
	Student(): id("0"), name("Kowalski"), program("null"){};
	Student(std::string, std::string, std::string, StudyYear);
	~Student(){};
	friend std::ostream& operator <<(std::ostream&, const Student&);
	friend std::istream& operator >>(std::istream&, Student&);	
	
};

std::ostream& operator <<(std::ostream& output, const Student& other){
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
}


int main(){
	StudyYear y;
	Student student1;
	std::cin>>student1;
	std::cout << student1;
	std::cin >> y;
	std::cout << ++y;
	std::cout << y++;
	
	std::cout << y;

	return 0;
}

Student::Student(std::string id_, std::string name_, std::string program_, StudyYear year_){
		this->id = id_;
		this->name = name_;
		this->program = program_;
		this->year = year_;
	}
