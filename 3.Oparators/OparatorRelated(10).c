#include <stdio.h>

int main()
{
// Create variables

    int a, b, c;                 // Uninitialized variable

// Inputing the Numbers

    system("cls");
    printf("Enter the first numbers:");
    scanf("%d", &a);
    printf("Enter the secound number:");
    scanf("%d", &b);~
    printf("Enter the third number:");~
    scanf("%d", &c);

//Opparations
   
    if ((a+b) >= 80 && b >= 0)
        {
            printf("a) 1 \n");
        }
        else
            {
                printf("a) 0 \n");
            }

    if ((a-b)== 0 ||c != 0)
        {
            printf("b) 1 \n");
        }
        else
            {
                printf("b) 0 \n");
            }

    if (a != b ||( b < a ) && c >0)
        {
            printf("c) 1 \n");
        }
        else
            {
                printf("c) 0 \n");
            }        
    
   return 0;
}
