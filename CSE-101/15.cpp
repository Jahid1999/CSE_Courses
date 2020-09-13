#include <iostream>

using namespace std;

int main (void)
{
	//int input;
	//cin >> input;
	
	char ch;
	cin >> ch;
	switch(ch)
	{
		case 'a': 	cout << "One" << endl;
					break;
		case 'b': 	cout << "Two" << endl;
					break;
		case 'c': 	cout << "Three" << endl;
					//break;
		case 'd': 	cout << "Four" << endl;
					break;
		default: 	cout << "Hudai likhsi" << endl;
	}
	cout << "out of Switch" << endl;
	
	return 0;
}


/*
for, while
continue
break, return
nested loop
switch
*/

/*
	int startingPoint;
	cin >> startingPoint;
	
	for(int i = startingPoint; i<50; i=i*3) // for (inititalization;condition;increment) vs while(condition)
	{
		cout << i << endl;	
	}
	cout << "loop sesh" << endl;
	
	for(int i=0;i<5;i=i+1)
	{
		for(int j=0;j<5;j=j+1)
		{
			cout << i*j << "\t";
		}
		cout << endl;
	}
*/
