#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (void)
{
	int dice;
	
	srand(time(NULL));
	
	dice = rand()%6+1;
	
	cout << "random number is " << rand() << endl;
	
	/*
	switch (dice)
	{
	case 1: cout << "move " << dice << " step forward"  << endl; break;
	case 2: cout << "move " << dice << " steps forward" << endl; break;
	case 3: cout << "move " << dice << " steps forward" << endl; break;
	case 4: cout << "move " << dice << " steps forward" << endl; break;
	case 5: cout << "move " << dice << " steps forward" << endl; break;
	case 6: cout << "move " << dice << " steps forward" << endl << "PlayAgain" << endl; 
	default: 
	}
	*/
	
	if(dice == 1)
	{
		cout << "move " << dice << " step forward" << endl;
	}
	else if(dice == 2)
	{
		cout << "move " << dice << " steps forward" << endl;
	}
	else if(dice == 3)
	{
		cout << "move " << dice << " steps forward" << endl;
	}
	else if(dice == 4)
	{
		cout << "move " << dice << " steps forward" << endl;
	}
	else if(dice == 5)
	{
		cout << "move " << dice << " steps forward" << endl;
	}
	else
	{
		cout << "play again" << endl;
	}
	
	return 0;
}
