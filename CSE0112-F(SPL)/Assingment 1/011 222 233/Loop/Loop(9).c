#include <stdio.h>

void main()
{

    int x, num1, num2;

    printf("Enter the Number:");
    scanf("%d", &x);

    int num1 = x % 10;

    while (x != 0)
    {

        num2 = x % 10;
        x = x / 10;
    }
    printf("sumation of 1st and last digit is:%d + %d = %d", num2, num1, num1 + num2);
}