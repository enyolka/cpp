#include <iostream>
#include <complex>
#include <vector>
#include <string>
#include <regex>
#include "Matrix.h"


int main() {
    std::string str = "[1 2 3 ; 4 5 6 ; 7 8 9]";
    std::string str2 = "[2 1 21; 3 2 3; 4 3 4]";
    Matrix m(str);
    Matrix m2(str2);

    (m+m2).Print();
    (m-m2).Print();
    (m*m2).Print();

    return 0;
}