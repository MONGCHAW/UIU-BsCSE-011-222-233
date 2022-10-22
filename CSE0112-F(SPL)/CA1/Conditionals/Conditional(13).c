#include <stdio.h>

void main()
{

    // Initiazlizing Variables

    int age; // Unintialized Variables

    // Inputing the Age

    printf("Input the age of the candidate : ");
    scanf("%d", &age);

    // Conditinal Oparations

    if (age < 18)
    {
        printf("You are not eligible to caste your vote.\n");
    }
    else
    {
        printf("You are eligible for casting your vote.\n");
    }
}