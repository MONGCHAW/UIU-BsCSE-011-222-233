#include <stdio.h>
#include <math.h>

void main()
{
    float p, r, t, ci;
    printf("Enter the principle amount: ");
    scanf("%f", &p);
    printf("Enter time: ");
    scanf("%f", &t);
    printf("Enter rate: ");
    scanf("%f", &r);

    ci = p * (pow((1 + r / 100), t));

    printf("Compound Interest:%f", ci);
}