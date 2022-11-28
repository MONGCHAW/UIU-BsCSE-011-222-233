#include <stdio.h>
void main()
{
    int num, sum = 0, temp;

    // Reading number

        printf("Enter any number: ");
        scanf("%d", &num);

    // Adding digit by digit to the sum variable

        while(num>0)
        {    
            temp = num %10;    
            sum = sum + temp;    
            num = num /10;    
        }   

    // Printing sum of digit

        printf("Sum of digits: %d", sum);
}