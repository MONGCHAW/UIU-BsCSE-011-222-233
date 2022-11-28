#include<stdio.h>
void main()
{
    int x,i,sum=0;

    printf("Enter the value of n:");
    scanf("%d",&x);

    for(i=1;i<=x;i+=2){
        sum+=i;
    }

    printf("sum is(odd numbers of 1 to %d):%d",x,sum);
}