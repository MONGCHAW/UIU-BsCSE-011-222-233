#include <stdio.h>

void main()
{
    int W = 9999, X = 9999, Y = 9999, Z = 9999, arrayA[W], arrayB[X], swapB[Y], swapA[Z], n, m;

    {
        // Inputting for A

        printf("Number of inputs for Array A: ");
        scanf("%d", &n);

        printf("Enter the numbers for Array A: ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arrayA[i]);
        }

        // Inputting for B

        printf("Number of inputs for array B: ");
        scanf("%d", &m);

        printf("Enter the numbers for Array B: ");
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arrayB[i]);
        }

        // Taking temporary array values
        for (int i = 0; i < n; i++)
        {
            swapB[i] = arrayA[i];
        }

        for (int i = 0; i < m; i++)
        {
            swapA[i] = arrayB[i];
        }

        // Printing the swapped Arrays
        printf("Array A: ");
        for (int i = 0; i < m; i++)
        {
            arrayB[i] = swapA[i];
            printf("%d ", arrayB[i]);
        }

        printf("\n");

        printf("Array B: ");
        for (int i = 0; i < n; i++)
        {
            arrayA[i] = swapB[i];
            printf("%d ", arrayA[i]);
        }
    }
}
