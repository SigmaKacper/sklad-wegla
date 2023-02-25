#include <iostream>
using namespace std;

void menu(){
	cout<<"------ MENU ------\n-- 1 Dodawanie ---\n-- 2 Odejmowanie -\n-- 0 Koniec ------\n";
}

int check_menu(int choice) {
	do{
		cout<<"Operacja nr: ";
		cin>>choice;
	}while(!(choice >= 0 && choice < 3));
	
	return choice;
}

int math(int choice) {
	// int num1{}, num2{};
	int num1 = 0, num2 = 0;
	cout<<"Podaj 1 liczbe: ";
	cin>>num1;
	cout<<"Podaj 2 liczbe: ";
	cin>>num2;
	if(choice == 1)
		return num1 + num2;
	else if(choice == 2)
		return num1 - num2;
	
}

// int choice {};
int choice = 0;

int main(){
	while(true){
		menu();
		choice = check_menu(choice);
		if(choice != 0){
			int result = math(choice);
			cout<<"Wynik: "<<result<<endl;1
		}
		else
			break;
	}
	
	return 0;
}