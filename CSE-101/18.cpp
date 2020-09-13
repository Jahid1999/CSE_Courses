#include <iostream>

using namespace std;



void printSabbir(int *brr, int startIndex, int count)
{
 	for(int i=0; i<count; i++)
 	{
		cout << brr[startIndex+i] << endl; //*(brr+i)
		brr[i]=brr[i]*(-5);
	}
}

int main (void)
{
	int arr[5] = {100,200,300,400,500};
	
	cout << arr << endl<< endl;
	
	printSabbir(arr,0,5);
	printSabbir(arr,0,5);
	
	return 0;
}
