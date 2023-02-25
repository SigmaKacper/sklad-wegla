#include <iostream>
#include <cstdio>
include <windows.h>
//#include <unistd.h>
using namespace std;

#define STATE_CLOSE 1
#define STATE_OPEN 2
int state = STATE_CLOSE;
int start = 0;
char przycisk;

void do_closing(){
	if(start!=0)
	{
	cout<<"Brama sie zamyka !";
	sleep(1000);
	//usleep(1000000);
	}
	cout<<" Brama jest zamknieta !!! \nWCISNIJ 'o' aby otworzyc :";
	do{
		przycisk = getchar();
	}while(przycisk!='o');
	system("CLS");
	//system("clear");
}

int do_opening(){
	cout<<"Brama sie otwiera !";
	//sleep(1000)
	usleep(1000000);
	cout<<" Brama sie otworzyla !!! \nWcisnij 'c' aby brama sie zamkla :";
	do{
		przycisk = getchar();
	}while(przycisk!='c');
	//system("CLS");
	system("clear");
}


//********************

int main(){
	
	do{
	  switch(state){
	  
	   case STATE_CLOSE:
			do_closing();
			state = STATE_OPEN;
		break;
		
		case STATE_OPEN:
			do_opening();
			start = 1;
			state = STATE_CLOSE;
		break;
	  }
	}while(true);
}


