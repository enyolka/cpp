#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string binary(int num, std::string bin_num);
bool is_palindromic(std::string str);

int main(int argc, char** argv){
	int num, sum = 0;
	std::string str = "", bin_str="";

	for(int i=0; i <= 1000000; i++){
		str = std::to_string(i);
		if(is_palindromic(str)){
			bin_str = binary(i, bin_str);
			if(is_palindromic(bin_str))\
				sum += i;
		}
		bin_str ="";
	}
	
	std::cout << sum;
	return 0;
}


bool is_palindromic(std::string str){ 
	for(int i = 0; i <= str.length()/2; i++){
		if(str[i] != str[str.length()-i-1])
			return false;
	}		
	return true;
}

std::string binary(int num, std::string bin_str){
	std::vector<int> vec;
	int i = 0;
	int a = num;
	
	while(num)
	{
		vec.push_back(num % 2);
		num = num / 2;
	}
	
	for(auto x: vec){
		bin_str += std::to_string(x);
	}
	
	return bin_str;
}

