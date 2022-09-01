/* 
Make a C program that takes the input of a number and prints the number of digits and the sum of those digit
Sample Input: 512
Sample Output: The Number you gave was 512, Digit= 3 , Sum= 8
*/
#include<stdio.h>
int main()
{
    int number, digit = 0, sum = 0, numtemp ;
    printf("Enter a number:");
    scanf("%d",&number);
    while(number > 0)
    {
        numtemp = number % 10;
        sum= sum + numtemp;
        number = number / 10;
        digit = digit+1;
    }
    printf("Digit = %d\nSum = %d",digit, sum);
    return 0;
}