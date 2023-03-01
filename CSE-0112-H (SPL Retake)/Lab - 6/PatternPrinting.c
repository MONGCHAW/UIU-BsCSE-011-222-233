#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i - 1; k++)
        {
            static int p = 1;
            printf("%d", p);
            if (p < n)
            {
                p++;
            }
            else
                p = 1;
        }
        printf("\n");
    }
    return 0;
}