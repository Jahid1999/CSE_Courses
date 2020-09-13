#include <iostream>

using namespace std;

void tain (int a, int b, int *mul, double *div)
{
	cout << "t" << *mul << endl;
	cout << "t" << *div << endl;
	
	*mul = a*b;
	*div = (double)a / b;
	
	cout << "t" << *mul << endl;
	cout << "t" << *div << endl;
}

int main (void)
{
	int a=7, b=3;
	int mul=420;
	double div=-420.0;
	
	tain(a, b, &mul, &div);
	
	cout << mul << endl;
	cout << div << endl;
		
	return 0;
}

/*
loc glo dyn
multi dim
dynamic
*/
/*

void tain (int a, int b, int &mul, double &div)
{
	cout << "t" << mul << endl;
	cout << "t" << div << endl;
	
	mul = a*b;
	div = (double)a / b;
	
	cout << "t" << mul << endl;
	cout << "t" << div << endl;
}

int main (void)
{
	int a=7, b=3;
	int mul=420;
	double div=-420.0;
	
	tain(a, b, mul, div);
	
	cout << mul << endl;
	cout << div << endl;
		
	return 0;
}


*/

/*
void tain (int *a, int *arr)
{
	arr[0]=a[0]+a[1];
	arr[1]=a[0]-a[1];
	arr[2]=a[0]*a[1];
	arr[3]=a[0]/a[1];
}

int main (void)
{
	int results[4];
	
	int input[2]={10,5};
	
	tain(input, results);
		
	for (int i=0;i<4;i++)
		cout << results[i] << endl;
		
	return 0;
}
*/


/*

void tain (int a, int b, int *arr)
{
	arr[0]=a+b;
	arr[1]=a-b;
	arr[2]=a*b;
	arr[3]=a/b;
}

int main (void)
{
	int results[4];
	
	int a=10, b=5;
	
	tain(a,b, results);
		
	for (int i=0;i<4;i++)
		cout << results[i] << endl;
		
	return 0;
}

*/

/*

int results[4];

void tain (int a, int b)
{
	results[0]=a+b;
	results[1]=a-b;
	results[2]=a*b;
	results[3]=a/b;
}

int main (void)
{
	int a=10, b=5;
	
	tain(a,b);
		
	for (int i=0;i<4;i++)
		cout << results[i] << endl;
		
	return 0;
}

*/

/*

int* tain (int a, int b)
{
	int *results = new int [4];
	//int results[4];
	results[0]=a+b;
	results[1]=a-b;
	results[2]=a*b;
	results[3]=a/b;
	return results;
}

int main (void)
{
	int a=10, b=5;
	
	int *arr = tain(a,b);
		
	for (int i=0;i<4;i++)
		cout << arr[i] << endl;
		
	delete [] arr;
		
	return 0;
}

*/

/*

int tain (int *crr)
{
	int sum =0;
	for(int i=0; i<5; i++)
	{
		sum += crr[i];
		crr [i] = crr[i]*2;
	}
	return sum;
}

int main (void)
{
	int arr[5]={1,3,5,7,9};
	
	cout << tain(arr) << endl;
	
	for(int i=0; i<5; i++)
	{
		cout << arr[i] << endl;
	}
		
	return 0;
}


*/

/*
	int arr[size]={1,3,5,7,9};
	
	for(int i=0; i<5; i++)
		cout << arr[i]<< endl;
		
	int *brr;
	brr = arr;
	
	for(int i=0; i<5; i++)
		cout << brr[i]<< endl;
	
	cout << arr << endl;
	cout << brr << endl;
*/

/*
	long double arr [5] = {3.0,6.0,9.0,12.0,15.0};

	cout << arr << endl;
	cout << arr+1 << endl;
	//cout << &arr << endl;
*/

/*
	int *arr;
	arr= new int[5];
	
	for(int i=0;i<5;i++)
		*(arr+i) = 3*i+3;
		
	for(int i=0;i<5;i++)
		cout << arr[i] << endl;
	
	delete [] arr;
*/

/*
	int arr [5] = {3,6,9,12,15};

	cout << arr << endl;
	cout << arr+2 << endl;
	//cout << &arr << endl;
*/


/*
	int i;
	i=10;
	
	cout << i << endl;
*/
