#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int unit;
    double bill,surCharge;


    printf("Enter total units consumed: ");
    scanf("%d", &unit);

    if(unit <= 50)
    {
        bill = unit * 0.50;
    }
    else if(unit <= 150)
    {
        bill = 50*0.50 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        bill = 50*0.50 + 100*0.75 + ((unit-150) * 1.20);
    }
    else
    {
        bill = 50*0.50 + 100*0.75 + 100*1.20 + ((unit-250) * 1.50);
    }

    surCharge = bill * 0.20;
    bill  = bill + surCharge;

    printf("Electricity Bill = TK. %.2f\n", bill);


	return 0;
}
