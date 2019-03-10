#include <cstdlib>
#include <iostream>

int factorial_r(int n);
int factorial_i(int n);
int power(int base, int n);

int main(int argc, char** argv) {
    int num;
    
    std::cout << "Podaj liczbe: ";
    std::cin >> num;
    
    num = factorial_i(num);
    std::cout << num << std::endl;
    
    int base, n;
    
    std::cout << "Podaj podstawe i wykladnik potegi: ";
    std::cin >> base >> n;
    
    num = power(base, n);
    std::cout << num << std::endl;
    
    return 0;
}

int factorial_r(int n){
    return n == 0 ? 1 : n * factorial_r(n-1);
}

int factorial_i(int n){
    int sum = 1;
    for(int i = 1; i <= n; i++)
        sum *= i;
    return n == 0 ? 1 : sum;
}

int power(int base, int n){
    int sum = 1;
    for(int i = 1; i <= n; i++)
        sum *= base;
    return base == 0 ? 0 : sum;
}
