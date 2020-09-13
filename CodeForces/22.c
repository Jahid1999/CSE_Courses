#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int amount, note1000=0,note500=0, note100=0, note50=0, note20=0, note10=0, note5=0, note2=0, note1=0;
    
    printf("Input amount: ");
    scanf("%d", &amount);


	if(amount >= 1000)
    {
        note1000 = amount/1000;
        amount = amount - note1000 * 1000;
    }
    
    if(amount >= 500)
    {
        note500 = amount/500;
        amount = amount - note500 * 500;
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount =amount - note100 * 100;
    }
    if(amount >= 50)
    {
        note50 = amount/50;
        amount =amount - note50 * 50;
    }
    if(amount >= 20)
    {
        note20 = amount/20;
        amount =amount - note20 * 20;
    }
    if(amount >= 10)
    {
        note10 = amount/10;
        amount =amount - note10 * 10;
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount =amount - note5 * 5;
    }
    if(amount >= 2)
    {
        note2 = amount /2;
        amount =amount - note2 * 2;
    }
    if(amount >= 1)
    {
        note1 = amount;
    }

    printf("Total number of notes: \n");
    printf("1000: %d\n500: %d\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d\n",note1000,note500,note100,note50,note20,note10,note5,note2,note1);
    

    return 0;
}
