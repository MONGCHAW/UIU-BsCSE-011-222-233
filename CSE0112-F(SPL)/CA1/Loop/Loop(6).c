#include <stdio.h>
void main()
{
    int num, sum = 0, i;


    // Reading number


    printf("Enter any number:");
    scanf("%d", &num);

    for(i=2; i<=num; i+=2)

    {
        //Adding current even number to sum variable
        sum += i;
    }


    printf("Sum of all even number between 1 to %d: %d", num, sum);
}