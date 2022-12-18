#include <stdio.h>

void main(){

    int m=999999, n=99999, size = 0 , array[size];

    scanf("%d %d", &m, &n);


    int i=0,j=0;
    for (int i = 0; i <= m; i++)
    {
        scanf("%d",array[i]);
        for (int j = 0; j <= n; j++)
        {
         scanf("%d",array[j]);
        }

    }
    printf("%d", array[i][j]);











}
