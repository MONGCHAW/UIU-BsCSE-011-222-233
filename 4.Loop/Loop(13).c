#include<stdio.h>
int main()
{
    int n, i, j, k = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        k = k * i;
    }
    printf("%d", k);
}