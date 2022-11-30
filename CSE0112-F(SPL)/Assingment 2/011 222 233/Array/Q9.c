#include <stdio.h>

void main()
{
    int A = 9999, B = 9999, arrayA[A], arrayB[B], n;

    scanf("%d", &n);
    int m = n;

    // Inputting the numbers

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrayA[i]);
    }
    printf("Array A: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrayA[i]);
    }
    printf("\n");

    int j = m - 1;
    printf("Array B: ");
    for (int i = 0; i < n; i++)
    {
        arrayB[j] = arrayA[i];
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrayB[i]);
    }
}
