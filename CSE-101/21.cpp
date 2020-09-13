#include <iostream>

using namespace std;

int main (void)
{
	int arr[5][3];
		
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<3; j++)
		{
			cin >> *(*(arr+i)+j); //arr[i][j]
		}
	}

	
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<3; j++)
		{
			//if(arr[i][j]%5==0)cout << "row " << i << "column " << j<< "\t";
			cout << *(*(arr+i)+j) << "\t";//arr[i][j]
		}
		cout << endl;
	}
	
	return 0;
}
/*
DMA
loc-glob-dyn
recap
*/
