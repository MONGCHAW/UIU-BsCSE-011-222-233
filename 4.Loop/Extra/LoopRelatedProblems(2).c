/**
 * * Your task is to write a program that will calculate the sum of the following series up to its nth term. 
 * ! Be careful about the postive and negetive signs of terms
 * ? Check the attached photo for the actual question
 */ 

#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, b, c, i, numtemp;

    printf("Enter the n'th number:");
    scanf("%d",&n);

    for(i = 1; i <= n; i = i + 2)
        int a = i ;
        printf ("%d", a);

    // while(number > 0)
    // {
    //     numtemp = number % 10;
    //     sum= sum + numtemp;
    //     number = number / 10;
    //     digit = digit+1;
    // }
    // printf("Digit = %d\nSum = %d",digit, sum);
    return 0;
}