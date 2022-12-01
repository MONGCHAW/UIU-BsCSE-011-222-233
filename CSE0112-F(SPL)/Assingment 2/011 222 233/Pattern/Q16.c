#include <stdio.h>
void main()
{
    int rows, i, j, k;

    scanf("%d", &rows);
    
    printf("\n");   
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= rows; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}