#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

char **Array();
std::string Polybius(char **arr, std::string& str, std::string& result);
std::string antyPolybius(char **arr, std::vector<int>& vec, std::string& result);
void DeleteArray(char **arr);

int main(int argc, char** argv){;

	std::ifstream input_file(argv[1]);
	std::ofstream output_file(argv[2]);
	//int node = std::stoi(argv[3]);
	
	if(!input_file)
	std::cout << "Nie moza otworzyc pliku!\n";

	char **arr;
	std::string str, sum, result = "";
	std::vector<int> vec;
	int num, closed = 0, option;
	
	arr = Array();
	
    while(closed == 0){
    	std::cout << "\n Wybierz opcje: \n 1. Zakoduj tekst \n 2. Odkoduj tekst \n 3. Zapisz do pliku \n 4. Wyjdz \n";
    	std::cin >> option;
    	
		switch(option){
		case 1:
			while(input_file >> str) sum += str;
			Polybius(arr, sum, result);
			break;
		case 2:
			while(input_file >> num) vec.push_back(num);
			antyPolybius(arr, vec, result);
			break;
		case 3:
			output_file << result;
			break;
		case 4:
			closed = 1;
		default:
			std::cout << "\n Zadna z opcji nie pasuje do wybranej przez ciebie \n";
			break;
		}
	}
	
	DeleteArray(arr);
	input_file.close(); 
	output_file.close();
	
	return 0;
}

char **Array(){
	char** arr = new char*[5];
	int n = 65;
	for(int i = 0; i < 5; i++)
		arr[i] = new char[5];
		
	for(int j = 0; j < 5; j++)
		for(int k = 0; k < 5; k++){
			if(n != 74) arr[j][k] = (char)n;
			else{
				n++;
				arr[j][k] = (char)n;
			}
			n++;
		}
	return arr;
}

std::string Polybius(char **arr, std::string& str, std::string& result){
	std::transform(str.begin(), str.end(), str.begin(), ::toupper);
	
	for(char c: str){
		for(int j = 0; j < 5; j++)
			for(int k = 0; k < 5; k++)
				if(arr[j][k] == c){	
					std::string num = std::to_string(j+1) + std::to_string(k+1) + ' ';
					result += num;
					}
		if(c == 'J') result += "24 ";
	}
	return result;
}

std::string antyPolybius(char **arr, std::vector<int>& vec, std::string& result){
	
	for(int i = 0; i < vec.size(); i++){
		int a = vec[i] / 10;
		int b = vec[i] % 10;
		result += arr[a-1][b-1];
		}
	return result;
}

void DeleteArray(char **arr){
	for(int i = 0; i < 5; i++)
		delete [] arr[i];
	delete [] arr;
}

