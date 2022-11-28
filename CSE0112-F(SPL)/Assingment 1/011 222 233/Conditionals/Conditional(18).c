#include <stdio.h>

void main()
{

    // Initiazlizing Variables

    int angle1, angle2, angle3, sum;

    // Inputing the Angles

    printf("Input three angles of triangle : ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    // Conditinal Oparations

    if (angle1 > 0 && angle1 >= 180)
    {
        if (angle2 > 0 && angle2 >= 180)
        {
            if (angle3 > 0 && angle3 >= 180)
            {
                if (angle1 + angle2 + angle3 == 180)
                {
                    printf("It is a valid triangle.\n");
                }
                else
                {
                    printf("It is a invalid triangle.\n");
                }
            }
        }
    }
    else
    {
        printf("It is a invalid triangle.\n");
    }
}