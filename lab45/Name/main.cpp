#include <iostream>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>
#include "Name.h"


int main(){
    std::string str = "Ola Kasia Kowalska";
    std::string strx = "Ela Kasia Jola Kowalskaj";

    Name me(str);
    Name you(strx);
    std::cout << me.ToFullInitials() << std::endl;
    std::cout << me.ToFirstNamesInitials() << std::endl;
    std::cout << me.ToSurnameNames() << std::endl;
    std::cout << me.ToNamesSurname() << std::endl;
    std::cout << me.IsBeforeByFirstName(you) << std::endl;
    std::cout << me.IsBeforeBySurname(you) << std::endl;

    return 0;
}