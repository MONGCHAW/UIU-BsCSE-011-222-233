#include <stdio.h>

void main()

{
    int n, p, i, result = 1;
    
    printf("Enter a number:");
    scanf("%d", &n);

    printf("Enter the power of ");
    printf("%d^", n);
    scanf("%d", &p);
    
        i = p;

    while (p > 0)
    {
        result *= n;
        p--;
    }

    printf("%d^%d = %d", n, i, result);

}