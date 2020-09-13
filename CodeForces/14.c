#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b;
	
	printf("Enter numbers: ");
	
	scanf("%d%d",&a,&b);
	
	if(a>b)
		printf("Max= %d\nMin= %d\n",a,b);
	else
		printf("Max= %d\nMin= %d\n",b,a);

	return 0;
}
