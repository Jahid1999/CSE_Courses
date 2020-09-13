#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char ch;
	
	printf("Enter numbers: ");
	
	scanf("%c",&ch);
	
	if(ch>=65 && ch<=92)
	{
		ch=ch+32;
		printf("%c\n",ch);
	
	}
	else
	{
		ch=ch-32;
		printf("%c\n",ch);
	
	}

	return 0;
}
