#include <iostream>

using namespace std;

void print1D(int *arr)
{
	for (int i=0; i<5; i++)
	{
		cout << arr[i] << endl;
	}
}

void print2D(int (*brr)[3])
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout << brr[i][j] << "\t";
		}
		cout << endl;
	}
}

int main (void)
{
	int arr[5] = {1,2,3,4,5};
	int brr[3][3] ={1,2,3,	4,5,6,	7,8,9};
	
	print1D(arr);
	print2D(brr);
	
	return 0;
}
