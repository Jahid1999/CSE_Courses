#include <iostream>

using namespace std;

int main (void)
{
	char ch;
	cin.get(ch);
	while(!cin.eof())
	{
		cout << ch;
		cin.get(ch);
	}
	
/*	
	char ch;
	while(cin.get(ch))
	{
		cout << ch;
	}
*/

/*
	char ch;
	while(cin >>ch)
	{
		cout << ch;
	}
	
*/	

	return 0;
}
