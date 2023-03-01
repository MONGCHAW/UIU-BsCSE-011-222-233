#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);

    int myArray[size][size];
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &myArray[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf(" %d", myArray[j][i]);
        }
        printf("\n");
    }
    return 0;
}