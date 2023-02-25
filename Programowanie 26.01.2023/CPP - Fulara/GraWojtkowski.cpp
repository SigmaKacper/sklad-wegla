#include <iostream>
#include <string>
#include <windows.h>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

using namespace std;
int wybor = 1;
double zycie = 100, sila = 5, armor = 0;
int monety = 5;

void spanko(double sekundy);
void open();
int menu(double zycie, double armor, int monety, int wybor);
void walka(double & zycie, double armor);
double losoweZycie(int zycie);
double losowaSila(int sila);

int main(){
	srand(time(NULL));
	open();
	do{
		wybor =	menu(zycie, armor, monety, wybor);
		switch(wybor){
			case 1:
				walka(zycie, armor);
				//sklep(zycie, sila, armor);
			break;
			
			default:
				cout << "Chcialbys :)\n";
			spanko(3);
		}
	system("CLS");
	}while(zycie > 0);
	
return 0;
}

void spanko(double sekundy){
	Sleep(sekundy * 1000);
}
void open(){
	cout << "No elo, elo.\nW grze walcz aby zyc i byc bogaty. Tak to tylko tyle";	
	Sleep(2000);
	for(int i = 0; i < 3; i++){
		Sleep(1000);
		cout << '.';
	}
	cout << endl;
}
int menu(double zycie, double armor, int monety, int wybor){
	cout << "---- MENU ----\nZycie: " << zycie << "\nMonety: " << monety << "\nArmor :" << armor << "\nSila: "<< sila << "\n-> 1: Walka Gladiatorow\n-> 2: KMS\n Wybor: ";
	do{
		if(!(wybor >= 1 && wybor <= 2))
			cout << "Zle polecenie, podaj ponownie: ";
		cin>>wybor;
	}while(wybor != 1 && wybor != 2);
	
	return wybor;
}

void walka(double & zycie, double armor){
	system("CLS");
	int przeciwnikZycie = 0, przeciwnikSila = 0;
	int przeciwnik = rand() % 3 + 1;
	switch(przeciwnik){
		case 1:
			cout << "Walczysz z Grochu Dabem: \n";
			break;
		case 2:
			cout << "Walczysz z Norbertem Gierczakiem: \n";
			break;
		case 3:
			cout << "Walczysz z Sterydziarzem: \n";
			break;
	}
	
	przeciwnikZycie = losoweZycie(przeciwnik);
	przeciwnikSila = losowaSila(przeciwnik);
	
	cout << "Staty Oponenta:\n-Zycie: " << przeciwnikZycie << "\n-Sila: " << przeciwnikSila << endl;
	int ktoZaczyna = 0;
	cout << "Pora zaczac \n";
	spanko(2);
	do{
		przeciwnikZycie -= sila;
		zycie -= przeciwnikSila;
		cout << "Twoje Zycie: " << zycie << " Zycie Oponenta: " << przeciwnikZycie << endl;
			
	spanko(1.5);
	}while(!(zycie <= 0 || przeciwnikZycie <= 0));
	
	if(zycie <= 0){
		cout << "UMARLES !!!\n";
		spanko(5);
	}
	else{
		cout << "WYGRALES !!!\n";
		spanko(3);
	}
}
double Zycie(int zycie){
	return rand() % 100 + ( (rand() % 20 + 1 ) * zycie);
}
double losowaSila(int sila){
	return rand() % 3 + ( (rand() % 3 + 1 )* sila);
}
