#include <stdio.h>
void main()
{
    int n, p, i, result = 1;

    printf("Enter a number:");
    scanf("%d", &n);
    
    printf("Enter the power of ");
    printf("%d^", n);
    scanf("%d", &p);

    for (i = 1; i <= p; i++)
    {
        result *= n;
    }

    printf("%d^%d = %d", n, p, result);


}