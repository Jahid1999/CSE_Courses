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
