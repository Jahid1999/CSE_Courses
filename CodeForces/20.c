#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double buy,sell,profit,loss;
	
	printf("Buy: ");	
	scanf("%lf",&buy);
	
	printf("Sell: ");	
	scanf("%lf",&sell);
	
	if(sell>buy)
	{
		profit=((sell-buy)/buy)*100;
		printf("Profit: %.2lf\n",profit);
	}
	
	else
	{
		loss=((buy-sell)/buy)*100;
		printf("Loss: %.2lf\n",loss);
	}
	
		

	return 0;
}
