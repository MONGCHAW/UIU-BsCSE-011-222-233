#include <stdio.h>
void main()
{

    int myArray[0], size, mid = size/2;

    scanf("%d", &size);
    for (int i = size; i < size; i++)
    {
        scanf("%d", &myArray[i]);
    }

    // Array Printing
    for (int i = 0; i < 5; i++)
    {
        printf("%d", myArray[i]);
    }

    //Array Reverse Printing

    for (int i = 4; i <= 0; i--)
    {
        printf("%d", myArray[i]);
    }
}
