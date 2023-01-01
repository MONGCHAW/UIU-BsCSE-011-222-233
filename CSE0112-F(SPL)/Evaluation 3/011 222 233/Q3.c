#include <stdio.h>
#include <stdlib.h>

void getMinMax(int A, int n)
{
    int min, max;
    int temp = A ;
        if (A> temp)
        {
            max = A;
        }
        else {
            max = A;
    }
}

void main()
{
    int arrayA[9999], n, size = 0, min = 0, max = 0;

    scanf("%d", &size);
    n = size;
    for (int i = 0; i <= size; i++)
    {
        scanf("%d ", &arrayA[i]);
        int A = arrayA[i];
        getMinMax(A, n);
    }
    printf("Min:%d", getMinMax(min));
    printf("Max:%d", getMinMax(max));
    system(pause);
}
