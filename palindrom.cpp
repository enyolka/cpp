#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>

std::string reverse_string(std::string str, int end);
std::string reverse_string2(std::string str, int start, int end);
bool is_palindrome(std::string str)

int main(int argc, char** argv){
    std::string str;
    int start = 0, end;
    int option, close = 0;
    
    std::cout << "Podaj tekst: \n";
    getline(std::cin,str);
    end = str.length();
        
    while(close == 0){
    	std::cout << "\n Wybierz opcje: \n 1. Odwroc tekst \n 2. Sprawdz czy jest palindoromem \n 3. Wyjdz \n";
    	std::cin >> option;
    	
		switch(option){
		case 1:
			//std::reverse(str.begin(), str.end());
			str = reverse_string2(str, start, end);
    		std::cout << str << std::endl;
			break;
		case 2:
			if(is_palindrome(str)) 
				std::cout << "To jest palindrom\n";
			else
				std::cout << "To nie jest palindrom\n";
    		break;
		case 3:
			close = 1;
		default:
			break;
		}
	}
		
	return 0;
}

std::string reverse_string(std::string& str, int end){
	std::string new_str;
	for(int i = 0; (i+1) <= end/2 ; i++)
	{
		std::swap(str[i], str[end-i-1]);
		/*char temp = str[i];
		str[i] = str[end-i-1];
		str[end-i-1] = temp; */
	}
	return str;
}


std::string reverse_string2(std::string str, int start, int end){
	while((start+1) <= end/2){
		char temp = str[start];
		str[start] = str[end-start-1];
		str[end-start-1] = temp;
		start += 1;
		reverse_string2(str, start, end);	
	}
	return str;
}

/*std::string reverse_string3(std::string str){
	return str;
}*/

bool is_palindrome(std::string str){
	for(int i = 0; i <= str.length()/2; i++){
		if(str[i] != str[str.length()-i-1])
			return false;
	}		
	return true;
}

