#include<stdio.h>
int main()
{
    int n, i, j = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
    {
        if(i%2 == 0)
        {
            j = j - i;
        }
        else
        {
            j = j + i;
        }
    }
    printf("Sum is %d", j);
}