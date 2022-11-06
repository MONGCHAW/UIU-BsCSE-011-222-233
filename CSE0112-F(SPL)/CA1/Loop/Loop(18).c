#include <stdio.h>
void main()
{
    int n, i, flag = 1;
    printf("input any number:");
    scanf("%d", &n);
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1 && n != 1)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is not prime number", n);
    }
}