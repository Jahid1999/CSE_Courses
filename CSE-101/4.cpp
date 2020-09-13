#include <iostream>

using namespace std;

int main (void)
{
	int n;
	cin >> n;
	
	string faltu;
	getline(cin, faltu);
	
	for(int i=0; i<n; i++)
	{
		string s;
		getline(cin,s);
		cout << s << endl;
	}
	
	return 0;
}
