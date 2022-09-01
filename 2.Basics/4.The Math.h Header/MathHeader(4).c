#include <stdio.h>
#include <math.h>
int main()
{
// Create variables

    double s,u,v2,a,v;                 // Uninitialized variable

//Inputing Numbers  
    printf("Enter the value of 'u': ");
    scanf("%lf", &u);
    printf("Enter the value of 'a': ");
    scanf("%lf", &a);
    printf("Enter the value of 's': ");
    scanf("%lf", &s);

//Arithmatic Opparations
    v2 = u * u + 2*a*s;
    v = sqrt(v2);

// Print variables
    printf("v = %.2lf", v);

   return 0;
}
