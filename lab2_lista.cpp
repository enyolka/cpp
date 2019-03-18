#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

struct ForwardList{
	int data;
	ForwardList *next;	
};

void PushFront(ForwardList*& head, ForwardList*& tail, int value);
void Show(ForwardList* head);
void Destroy(ForwardList* head);

int main(int argv, char** argc){
	
	ForwardList* head = NULL;
	ForwardList* tail = NULL;
	
	int value, option, closed = 0;
	
		while(closed == 0){
		std::cout << "\n Wybierz opcje:\n 1. Dodaj wartosc \n 2. Wyswietl liste \n 3. Wyjscie \n\t";
		std::cin >> option;
		
		switch(option){
		case 1:
			std::cout << "Podaj wartosc: ";
			std::cin >> value;
			PushFront(head, tail, value);
			break;
		case 2:
			Show(head);
			break;
		case 3:
			closed = 1;
			break;
		default:
			std::cout << "\n Zadna z opcji nie pasuje do wybranej przez ciebie \n";
			break;
		}
	}
	
	Destroy(head);
	
	return 0;
}

void PushFront(ForwardList*& head, ForwardList*& tail, int value){
	ForwardList* temp = new ForwardList;
	if(head == NULL){
		temp -> data = value;
		temp -> next = head;
		head = temp;
		tail = temp;
	}
	else{
	temp -> data = value;
	temp -> next = head;
	head = temp;
	}
}
void Show(ForwardList* head){
	std::cout << std::endl;
	while(head != NULL){
		std::cout << head -> data << "\t";
		head = head -> next;
	}
}

void Destroy(ForwardList* head){
	ForwardList* temp = head;
	while(head != NULL){
		head = head -> next;
		delete temp;
		temp = head;
	}
}

