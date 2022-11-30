#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        int q = 2*i;
        for(int j=2; j<=(n*2-(q)); j++)
        {
            printf("_");
        }

        for(int j=i; j>=1; j--)
        {
            if(j==n)
            {
                continue;
            }
            printf("%d", j);
        }
        printf("\n");
    }
}
