#include <iostream>

using namespace std;

void x(void)
{
	cout << "hudai" << endl;
}

int add(int a, int b)
{
	x();
	return a+b;
}

int main (void)
{
	int a=10, b=20;
	cin >> a >> b;
	cout  << add(a,b) << endl;
	return 0;
}



// int add(int a, int b); //prototype dicleration
