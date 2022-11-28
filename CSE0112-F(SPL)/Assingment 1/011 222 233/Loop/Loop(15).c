#include<stdio.h>
#include<math.h>
void main()
{
    int num,num2,num3,temp,temp2,sum=0,count=0;
    printf("Enter the number:");
    scanf("%d",&num);

    num2=num;
    num3=num;

    while(num2!=0){
        temp2=num2%10;
        num2=num2/10;
        count++;
    }

    while(num!=0){
        temp=num%10;
        sum=sum+ pow(temp,count);
        num=num/10;
    }

    

    if(sum==num3){
        printf("%d is armstrong number",num3);
    }
    else{
        printf("%d is not armstrong number",num3);
    }
    


}