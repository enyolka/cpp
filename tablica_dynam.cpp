#include <cstdlib>
#include <iostream>

int **Array2d(int rows, int columns);
void printArray(int **arr, int rows, int columns);
void DeleteArray(int **arr, int rows);

int main(int argc, char** argv){
	int rows, columns;
	int **tab;
	
	std::cout << "Podaj liczbe wierszy i kolumn: \n";
	std::cin >> rows >> columns;
	
	tab = Array2d(rows, columns);
	printArray(tab, rows, columns);
	DeleteArrat(tab, rows);
	
	return 0;
}

int **Array2d(int rows, int columns){
	int** arr = new int*[rows];
	
	for(int i = 0; i < rows; i++)
		arr[i] = new int[columns];
		
	for(int j = 0; j < rows; j++)
		for(int k = 0; k < columns; k++)
			arr[j][k] = (j+1) * (k+1);
	
	return arr;
}

void printArray(int **arr, int rows, int columns){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++)
			std::cout << arr[i][j] << '\t';
		std::cout << std::endl;
	}
}

void DeleteArray(int **arr, int rows){
	for(int i = 0; i < rows; i++)
		delete [] arr[j];
	delete [] arr;
}

