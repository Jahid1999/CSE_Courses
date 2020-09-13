#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b,c;
	
	printf("Enter numbers: ");
	
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b)
	{
		if(a<c)
			printf("%d %d\n",b,c);
		else
			printf("%d %d\n",a,b);
	}
	
	else
	{
		if(b<c)
			printf("%d %d\n",a,c);
		else
			printf("%d %d\n",a,b);
	
	}

	return 0;
}
