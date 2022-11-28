#include <stdio.h>
void main()
{
    int n, i, fact = 1;
    printf("Enter the number:");
    scanf("%d", &n);
    i = n;
    while (n > 0)
    {
        fact = fact * n;
        n--;
    }

    printf("%d!=%d", i, fact);
}