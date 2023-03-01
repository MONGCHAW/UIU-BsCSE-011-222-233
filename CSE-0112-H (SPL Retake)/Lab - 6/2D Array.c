#include <stdio.h>
int main()
{
    int row,col;
    scanf("%d %d", &row, &col);

    int myArray[col][row];
    
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &myArray[i][j]);
        }
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf(" %d", myArray[j][i]);
        }
        printf("\n");
    }
    return 0;
}