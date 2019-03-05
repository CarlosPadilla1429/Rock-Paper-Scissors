/*Rock_Paper_Scissors_Padilla.cpp
COSC-1436-57004
3-5-2019*/
#include <iostream>
#include <cstdlib>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 

using namespace std; 

int main()
{
	srand (time(NULL));
	int choice = 0, comp = 0;
	comp = rand() % (3) + 1;
do
{
	
	do
	{
		cout << "\nChoose a number from 1 to 3:"<< endl;
		cin >> choice;
		if(choice == 1)
		{
			cout << "You chose ROCK!" << endl;
		}
		else if(choice == 2)
		{
			cout << "You chose PAPER!" << endl;
		}
		else if(choice == 3)
		{
			cout << "You chose SCISSORS!" << endl;
		}
		else
		{
			cout << "Invalid choice." << endl;
		}
	}while(choice > 3 || choice < 1);
	
	if(comp == 1)
	{
		cout << "Computer chose ROCK!" << endl;
	}
	else if(comp == 2)
	{
		cout << "Computer chose PAPER!" << endl;
	}
	else if(comp == 3)
	{
		cout << "Computer chose SCISSORS!" << endl;
	}
	
	if(comp == choice)
	{
		cout << "Oops it's a tie!!" << endl;
	}
	else if(comp == 1 && choice == 2)
	{
		cout << "You WIN!! Paper beats Rock!" << endl;
	}
	else if(comp == 1 && choice == 3)
	{
		cout << "Sorry you lose!! Rock beats Scissors!" << endl;
	}
	else if(comp == 2 && choice == 1)
	{
		cout << "Sorry you lose!! Paper beats Rock!" << endl;
	}
	else if(comp == 2 && choice == 3)
	{
		cout << "You WIN!! Scissors beats Paper!" << endl;
	}
	else if(comp == 3 && choice == 1)
	{
		cout << "You Win!! Rock beats Scissors!" << endl;
	}	
	else if(comp == 3 && choice == 2)
	{
		cout << "Sorry you lose!! Scissors beats Paper!" << endl;
	}
	
}while(1);
	
	
	return 0;
}
