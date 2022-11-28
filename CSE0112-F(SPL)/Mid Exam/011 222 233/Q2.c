#include <stdio.h>

void main()
{
    int n;
    scanf("%d",&n);

    if (n % 2 == 0){
        printf("Please Input valid Number");
    } else
    {
        for (int row = 1; row <= n ; row++) {
            for (int col = 1; col <= n; col++)
            {
                if (col % 2 == 0 )
                {
                printf("%d ", col);
                }
                
            }
            printf("\n");
        }

    }


}
