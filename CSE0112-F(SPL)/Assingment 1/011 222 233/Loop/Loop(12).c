#include<stdio.h>

void main()
{
    int n,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    for(temp=0;n!=0;n/=10){
        temp*=10;
        temp=temp+n%10;
    }
    printf("Reversed number is:%d",temp);

}