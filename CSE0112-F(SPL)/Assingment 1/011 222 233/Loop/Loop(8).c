#include <stdio.h>
#include <math.h>
void main()
{
    int num, count = 0;
 
    printf("Enter any number: ");
    scanf("%d", &num);
 
    int temp = num;
    int last = temp % 10;
    count = (int)log10(temp);
 
    while(temp>=10)
    {
        temp /= 10;
    }
    int first = temp;
    int swap = (last * pow(10, count) + first) + (num - (first * pow(10, count) + last));
 
    printf("Last Digit: %d\n", last);
 
    printf("First Digit: %d\n", first);
 
    printf("%d is swapped to %d\n", num, swap);
}