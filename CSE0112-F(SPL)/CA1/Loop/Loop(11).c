#include <stdio.h>

void main()
{
    int n, mul = 1;

    printf("Enter your number:");
    scanf("%d", &n);

    while (n != 0)
    {
        int i = n % 10;
        mul *= i;
        n /= 10;
    }
    printf("product is:%d", mul);

}