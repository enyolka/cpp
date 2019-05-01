#include <iostream>
#include <string>


class PESEL{
	std::string pesel;
public:
	PESEL(std::string pesel_ = ""): pesel(pesel_){}
	~PESEL(){}
	//char check(const char* a);
	void validatePESEL();
};

void PESEL::validatePESEL(){
	int control;
	std::string exception = "Nieporpawny PESEL!";
	try{	
	control = (9*(pesel[0]-'0') + 7*(pesel[1]-'0') + 3*(pesel[2]-'0') + 1*(pesel[3]-'0') + 9*(pesel[4]-'0') + 7*(pesel[5]-'0') + 3*(pesel[6]-'0') + 1*(pesel[7]-'0') + 9*(pesel[8]-'0') + 7*(pesel[9]-'0'))%10 ;
	if(control != (pesel[10] - '0'))
		throw exception;
	}
	catch(std::string exc){
		std::cout << " Wyjatek: " << exc << std::endl; 
	}
}

int main(){
	PESEL p("44051401358");
	PESEL p2("99062*****");
	p.validatePESEL();
	p2.validatePESEL();
	return 0;
}
