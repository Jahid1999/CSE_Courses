#include <iostream>

using namespace std;


int* constructArray(void)
{
	int *arr;
	arr = new int [10];
	return arr;
}

/*
//wrong way
void constructArray (int *arr)
{
	arr = new int [10];
}
*/

void deleteArray(int *arr)
{
	delete [] arr;
}

void assignValues(int *arr)
{
	for(int i=0; i<10; i++)
		cin >> arr[i];
}

void printValues(int *arr)
{
	for(int i=0; i<10; i++)
		cout << arr[i] << endl;
}

int main (void)
{
	int*arr;
	
	arr = constructArray();
	//constructArray(arr); //wrong way
	assignValues(arr);
	printValues(arr);
	deleteArray(arr);

	return 0;
}
