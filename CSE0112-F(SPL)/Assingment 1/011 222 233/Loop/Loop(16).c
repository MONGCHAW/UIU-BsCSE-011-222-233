#include <stdio.h>
#include <math.h>

void main()
{
    int lower, higher, i;

    printf("Enter the lower value:");
    scanf("%d", &lower);
    printf("Enter the higher value:");
    scanf("%d", &higher);

    printf("armstrong numbers between %d an %d are:", lower, higher);

    for (i = lower; i <= higher; i++)
    {
        int num, num2, temp, temp2, sum = 0, count = 0;
        num = i;
        num2 = i;

        while (num2 != 0)
        {
            temp2 = num2 % 10;
            num2 = num2 / 10;
            count++;
        }

        while (num != 0)
        {
            temp = num % 10;
            sum = sum + pow(temp, count);
            num = num / 10;
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }
}