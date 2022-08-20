#include <stdio.h>

int main()
{
// Create variables

    int u, a, t, v;                                                                         // Uninitialized variable

// Inputing the Numbers

    printf("Enter the value of 'u': ");
    scanf("%d", &u);
    printf("Enter the value of 'a': ");
    scanf("%d", &a);
    printf("Enter the value of 't': ");
    scanf("%d", &t);

//Arithmatic Opparations

    v=u + a*t;                                                                          

// Print variables

    printf("The Numbers were u = %d , a = %d t = %d \n", u, a, t);                  //Printing the numbers
    printf("The the terminal velocity of a moving body is v=%d\n\n", v);          //Printing the result

   return 0;
}
