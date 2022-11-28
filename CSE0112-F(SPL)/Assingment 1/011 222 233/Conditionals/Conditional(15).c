#include <stdio.h>
#include <string.h>

void main()
{

    // Initiazlizing Variables

    int rollno, phy, che, it, total;
    float percentage;
    char name[20], div[10]; // Unintialized Variables

    // Inputing the Roll and Name

    printf("Input the Roll Number of the student :");
    scanf("%d", &rollno);

    printf("Input the Name of the Student :");
    scanf("%s", name);

    // inputting subject wise numbers

    printf("Input the number of the Physics :");
    scanf("%s", &phy);
    printf("Input the Name of the Chemistry :");
    scanf("%s", &che);
    printf("Input the Name of the Information Technology :");
    scanf("%s", &it);

    // Arithmatic Oparations

    total = phy + che + it;
    percentage = total/3.0;

    // Conditinal Oparations

    if (percentage >= 60)
        strcpy(div, "First");

    else if (percentage < 60 && percentage >= 48)
        strcpy(div, "Second");

    else if (percentage < 48 && percentage >= 36)
        strcpy(div, "Pass");

    else
        strcpy(div, "Fail");
    printf("\nRoll No : %d\nName of Student : %s\n", rollno, name);
    printf("Marks in Physics : %d\nMarks in Chemistry : %d\nMarks in Information Technology : %d\n", phy, che, it);
    printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n", total, percentage, div);
}