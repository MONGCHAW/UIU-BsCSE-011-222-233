#include <stdio.h>

int main()
{
// Create variables
    int a, b, maximum;                 // Uninitialized variable

// Inputing the Numbers
    printf("Enter the first numbers:");
    scanf("%d", &a);
    printf("Enter the secound number:");
    scanf("%d", &b);


//Arithmatic Opparations
    if(a == b)
    {
            printf("Both Equal\n");
            return 0;
    }
       
    maximum = (a > b) ? a : b;


// Print variables
    printf("%d is Maximum\n", maximum);  

   return 0;
}
