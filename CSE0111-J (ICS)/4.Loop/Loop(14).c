#include<stdio.h>
int main()
{
    int n, r, i, j, k = 1, l = 1,m;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    for(i = 1; i <= n; i++) {
        k = k * i;
    }
    for(m = 1; m <= (n-r); m++) {
        l = l * m;
    }
    printf("%d", k/(l*r));
}