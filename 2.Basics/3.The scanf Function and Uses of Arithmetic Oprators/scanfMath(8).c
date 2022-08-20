#include <stdio.h>

int main()
{
// Create variables

    int u, a, t, s;                                                                         // Uninitialized variable

// Inputing the Numbers

    printf("Enter the value of 'u': ");
    scanf("%d", &u);
    printf("Enter the value of 'a': ");
    scanf("%d", &a);
    printf("Enter the value of 't': ");
    scanf("%d", &t);

//Arithmatic Opparations

    s=u*t + 0.5*a*(t*t);                                                                          

// Print variables

    printf("The Numbers were u = %d , a = %d t = %d \n", u, a, t);                  //Printing the numbers
    printf("The displacement of a moving body is s=%d\n\n", s);                     //Printing the result

   return 0;
}
