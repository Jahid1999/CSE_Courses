#include <stdio.h>

int main ()
{
	int a[5]={1,2,3,4,5}; 
	int i;
	for( i=0;i<5;i++)
	{
		//cout << i+1 <<"th element is: " << a[i] << endl;
		
		printf("%d th element is : %d\n",i+1,a[i]);
	}
	
	
   return 0;
}
