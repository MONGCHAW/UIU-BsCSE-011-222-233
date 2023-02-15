#include <stdio.h>
#include <math.h>
void main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d^2 * %d", i, i+1);
        sum += (pow(i,2) * (i+1)) ;
        if (i<n)   printf(" + ");
    }
    printf(" = %d", sum);
}