#include <iostream>

using namespace std;

void tain(int *t) // here 't' is a refrence
{
	cout << "tain " << t[0] << endl;
	t[0]= t[0]+410;
}

int main (void)
{
	int i=10;
	
	tain(&i);
	
	cout << "main " << i << endl;
	
	
	return 0;
}


/*
void tain(int *t) // here 't' is a refrence
{
	cout << "tain " << *t << endl;
	*t= *t+410;
}

int main (void)
{
	int i=10;
	
	tain(&i);
	
	cout << "main " << i << endl;
	
	
	return 0;
}
*/

/*
void tain(int &t) // here 't' is a refrence
{
	cout << "tain " << t << endl;
	t= t+410;
}

int main (void)
{
	int i=10;
	
	tain(i);
	
	cout << "main " << i << endl;
	
	
	return 0;
}

*/
