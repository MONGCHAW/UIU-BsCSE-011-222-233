#include <stdio.h>

void main()
{
    int digit, temp, n, fact, sum = 0;
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        temp = n / 10;
        sum += digit;
        n = temp;
    }

    if (sum < 7)
    {
        printf(" Pixie");
    }
    else
    {
        printf("Not Pixie");
    }
}
