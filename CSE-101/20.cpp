#include <iostream>

using namespace std;


void arithmetic(int &x, int &y)
{
	int addition = x+y;
	int subtraction = x-y;
	
	x= addition;
	y = subtraction;
}

int main(void)
{
	int a=10, s=5;
	
	arithmetic(a,s);
	
	cout << a << " " << s << endl;
	
	return 0;
}



/*
void arithmetic(int x, int y, int &addition, int &subtraction)
{
	addition = x+y;
	subtraction = x-y;
}

int main(void)
{
	int a=10, s=5;
	
	int ar, sr;
	
	arithmetic(a,s, ar, sr);
	
	cout << ar << " " << sr << endl;
	
	return 0;
}
*/

/*
int* arithmetic(int *brr)
{
	int x[2];
	x[0] = brr[0]+brr[1];
	x[1] = brr[0]-brr[1];

	return x;
}

int main(void)
{
	int arr[2]={10,5};
	
	int *result = arithmetic(arr);
	
	cout << result[0] << " " << result[1] << endl;
	
	return 0;
}
*/

/*
void arithmetic(int *brr)
{
	int a = brr[0]+brr[1];
	int b = brr[0]-brr[1];
	brr[0]=a;
	brr[1]=b;
}

int main(void)
{
	int arr[2]={10,5};
	
	arithmetic(arr);
	
	cout << arr[0] << " " << arr[1] << endl;
	
	return 0;
}
*/

/*
int arithmetic(int x, int y)
{
	x+y;
	x-y
}

int main(void)
{
	int a=10, s=5;
	
	arithmetic(a,s);
	
	return 0;
}
*/
