#include <stdio.h>
void main()
{
    int n, temp, r, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp /= 10;
    }
    if (sum == n)
        printf("Yes");
    else
        printf("No");
}