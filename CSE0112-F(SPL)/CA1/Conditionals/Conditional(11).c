#include <stdio.h>

void main()
{

    // Initiazlizing Variables

    int week; // Unintialized Variables

    // Inputing the number

    printf("Enter number of day (1-7): ");
    scanf("%d", &week);

    // Conditinal Oparations

    if (week == 1)
    {
        printf("Monday");
    }
    else if (week == 2)
    {
        printf("Tuesday");
    }
    else if (week == 3)
    {
        printf("Wednesday");
    }
    else if (week == 4)
    {
        printf("Thursday");
    }
    else if (week == 5)
    {
        printf("Friday");
    }
    else if (week == 6)
    {
        printf("Saturday");
    }
    else if (week == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Input! Please enter week in between 1-7.");
    }
}