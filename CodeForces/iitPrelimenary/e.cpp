#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%4==1||i%4==2)
        printf("a");
    else if(i%4==0||i%4==3)
        printf("b");
    }
    printf("\n");
    return 0;
}
