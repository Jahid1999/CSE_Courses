#include <iostream>

using namespace std;

int main (void)
{
	int bsse10[10];
	
	//int *bsse10;
	//bsse10 = new int [10];
	
	for(int i=0;i<10;i=i+1)
		bsse10[i]=(i+1)*3;//*(bsse10+i)
		
	for(int i=0;i<10;i++)
	{
		cout << *(bsse10+i) << endl;//bsse10[i]
	}
	
	//delete [] bsse10;
	
	return 0;
}

/*
Array
one dimentional array
multi dimentional array

initialize arrays
pointer
local vs global vs dyanmic
*/

