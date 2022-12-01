#include <stdio.h>
void main()
{
    int n, i, j, k;

    scanf("%d", &n);

    //upper half Pyramid
    printf("\n");
    for (i = 1; i <= n; i++)
    {

        for (k = 1; k < i; k++)
            printf(" ");

        for (j = i; j <= n; j++)
        {
            printf("*");
            printf(" ");
        }

        printf("\n");
    }

    //lower half Pyramid    
    for (i = n - 1; i >= 1; i--)
    {

        for (k = 1; k < i; k++)
            printf(" ");

        for (j = i; j <= n; j++)
        {
            printf("*");
            printf(" ");
        }

        printf("\n");
    }
}
