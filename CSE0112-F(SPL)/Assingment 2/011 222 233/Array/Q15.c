#include <stdio.h>
void main()
{
    int n, m, flag;
    scanf("%d", &n);

    int arrayA[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arrayA[i]);
    }

    scanf("%d", &m);
    int arrayB[m];
    for (int i = 0; i < m; ++i)
    {
        scanf("%d", &arrayB[i]);
    }

    int tempArray[m + n];
    int k = 0;

    for (int i = 0; i < n; ++i)
    {
        tempArray[k] = arrayA[i];
        k++;
    }

    for (int i = 0; i < m; ++i)
    {
        flag = 1;
        for (int j = 0; j < n; ++j)
        {
            if (arrayB[i] == arrayA[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            tempArray[k] = arrayB[i];
            k++;
        }
    }

    for (int i = 0; i < k; ++i)
    {
        printf("%d ", tempArray[i]);
    }

}
