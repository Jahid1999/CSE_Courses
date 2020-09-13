#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b,c;
	
	printf("Input first side: ");
	scanf("%d",&a);
	
	printf("Input second side: ");
	scanf("%d",&b);
	
	printf("Input third side: ");
	scanf("%d",&c);
	
	
    
    if((a + b) > c)
    {
        if((b + c) > a)
        {
            if((a + c) > b)   
                printf("Triangle is valid\n");
                
            else
                printf("Triangle is not valid\n");

        }
        
        else
            printf("Triangle is not valid\n");
    }
    
    else
        printf("Triangle is not valid\n");

	return 0;
}
