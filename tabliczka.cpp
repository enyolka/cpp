#include <cstdlib>
#include <iostream>

void multiplication_table(int tab[][10]){
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++)
			std::cout << tab[i][j] << " ";
		std::cout << std::endl;
	}	
}

int main(int argc, char** argv){
	int tab[10][10];
	int n;
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			n = (i+1) * (j+1);
			tab[i][j] = n;
		}
	}
	
	multiplication_table(tab);
	
	return 0;
}
