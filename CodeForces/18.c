#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,ans;
	
	printf("Enter a number: ");
	
	scanf("%d",&a);
	
	if(a>0)
	{
		ans=a;
		printf("Absolute of %d is %d.\n",a,ans);
	}
	else
	{
		ans=-1*a;
		printf("Absolute of %d is %d.\n",a,ans);
	}

	return 0;
}
