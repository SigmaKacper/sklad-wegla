#include <iostream>
#include <cstdlib>
#include <time.h>
int main()
{
/*	
    int x;
		std::cout<<"Podaj 'x' najlepiej o wartosci 1 :";
	
	do{
		std::cin>>x;
		if(x==1)
		{
		std::cout<<"x wynosi 1";
	    }
	    else
	    {
	    	std::cout<<"wpisz 1 :";
		}
   }while(x!=1);
*/

/*	
    int x, a, b;
	std::cout<<"Podaj a :";
	std::cin>>a;
	std::cout<<"Podaj b :";
	std::cin>>b;
	
	if(!(b==0))
	{
		x = a/b;
		std::cout<<"Dzielenie :"<<x;
	}
	else
	{
		std::cout<<"Nie mozna dzielic przez 0 !!!"
	}
*/

/*
    int x, a, b, c, d;
    std::cout<<"Program policzy wzor  x= a/b + c/d \n";
    std::cout<<"Podaj a :";
	std::cin>>a;
	std::cout<<"Podaj b :";
	std::cin>>b;
	std::cout<<"Podaj c :";
	std::cin>>c;
	std::cout<<"Podaj d :";
	std::cin>>d;
	if(!(b==0 || d==0))
	{
		x=(a/b + c/d);
		std::cout<<"Wynik wynosi :"<<x;
	}
	else
	{
		std::cout<<"Nie mozna dzielic przez 0 !!!";
	}
*/


	int x, a, b;
	std::cout<<"Program policzy wzor  x = (a+6) / (b-4) \n";
	std::cout<<"Podaj a :";
	std::cin>>a;
	std::cout<<"Podaj b :";
	std::cin>>b;
	
	if(!(b==4))
	{
		x =  (a+6) / (b-4);
		std::cout<<"Wynik wynosi :"<<x;
	}
	else
	{
		std::cout<<"Program ci nie dziala poniewaz wpisales 4 a w wzorze b - 4 wiec automatycznie nieswiadomie dzielisz prezez zero \nNie mozna dzielic przez 0 !!!";
	}


/*
    int x;
    std::cout<<"Czy liczba jest parzysta ?  \n     Podaj liczbe :";
    std::cin>>x;
    if(x%2==0)
    {
    	std::cout<<"Liczba "<<x<<" jest parzysta :>  ! \n";
	}
	else
	{
		std::cout<<"Liczba jest nieparzysta ! \n";
	}
*/

	/*	srand(time(NULL));
		std::cout<<(rand()%50)+1; */
		    
}
