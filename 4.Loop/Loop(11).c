#include<stdio.h>
int main()
{
    int n, i, j, k = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
    {
        j = i*i*(i+1);
        k = k + j;
    }
    printf("The sum is %d", k);
}