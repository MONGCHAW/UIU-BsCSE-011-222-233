#include <stdio.h>

int main()
{
    int N=9999, M=9999, P=9999, arrayA[N], arrayB[M], n, m, set[P];

    {
        printf("Number of inputs for array A: ");
        scanf("%d", &n);


        printf("Enter the numbers for Array A: ");
        //Inputting the numbers first A//
        for(int i=0; i<n; i++)
        {
            scanf("%d", &arrayA[i]);

        }
        //Inputting the numbers for B//

        printf("Number of inputs for array B: ");
        scanf("%d", &m);

        printf("Enter the numbers for Array B: ");
        for(int i=0; i<m; i++)
        {
            scanf("%d", &arrayB[i]);

        }
        //finding the union//
        for(int i=0; i<n; i++)
        {
            set[i]=arrayA[i];
            printf("%d", set[i]);
        }
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if()
            }

        }
    }
}
