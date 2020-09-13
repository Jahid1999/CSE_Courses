#include <iostream>

using namespace std;

int main (void)
{
	int input;
	
	cin >> input;
	while(!cin.eof())
	{
		cout << input*input << endl;
		cin >> input;
	}
	
	return 0;
}
