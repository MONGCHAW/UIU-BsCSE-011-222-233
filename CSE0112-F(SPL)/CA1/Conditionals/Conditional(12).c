#include <stdio.h>

void main()
{

    // Initiazlizing Variables

    int num1, num2; // Unintialized Variables

    // Inputing the numbers

    printf("Input the values for Number1 and Number2 :");
    scanf("%d %d", &num1, &num2);

    // Conditinal Oparations

    if (num1 == num2)
    {
        printf("Number1 and Number2 are equal\n");
    }
    else
    {
        printf("Number1 and Number2 are not equal\n");
    }
}