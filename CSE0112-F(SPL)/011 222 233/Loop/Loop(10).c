#include <stdio.h>
void main()
{

    int x, i, temp;
    printf("enter the number:");
    scanf("%d", &x);

    temp = x % 10;
    printf("last digit is:%d\n", temp);

    while (x != 0)
    {
        temp = x % 10;
        x = x / 10;
    }
    printf("first digit is:%d", temp);
}