#include <stdio.h>

void main()
{
    int X = 9999, arrayA[X], n, m;

    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arrayA[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (arrayA[i] % 3 == 0)
            {
                arrayA[i] = -1;
            }
            printf("%d ", arrayA[i]);
        }
        printf("\n");
    }
}
