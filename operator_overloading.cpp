#include <iostream>

class Complex{
	int re, im;
public:
	Complex():re(0),im(0){}
	Complex(int re_, int im_){this->re = re_; this->im=im_;}
	~Complex(){};
	
	friend std::ostream& operator <<(std::ostream&, const Complex&);
	friend std::istream& operator >>(std::istream&, Complex&);
	
	Complex operator+(const Complex& other){
		return Complex(this->re + other.re, this->im + other.im);
	}

	Complex operator-(const Complex& other){
		return Complex(this->re - other.re, this->im - other.im);
	}
	Complex operator*(const Complex& other){
		int real = this->re * other.re - this->im * other.im;
		int imagin = this->re * other.im - this->im * other.re;
		return Complex(real, imagin);
	}
	Complex operator/(const Complex& other){
		int x = this->re * other.re + this->im * other.im;
		int y = this->re * other.im + this->im * other.re;
		int z = other.re * other.re + other.im * other.im;
		return Complex(x/z, y/z);
	}
};

std::ostream& operator <<(std::ostream& out, const Complex& other){
	out << other.re << "+" << other.im << "i" << std::endl;
	return out;
}
std::istream& operator >>(std::istream& in, Complex& other){
	std::cout << "Enter real part: ";
	in >> other.re;
	std::cout << "Enter imaginary part: ";
	in >> other.im;
	return in;
}

int main(){
	Complex num, num2, num3;
	std::cin >> num;
	std::cin >> num2;
	std::cout << num << num2;
	std::cout << num + num2;
	std::cout << num / num2;
	return 0;
}
