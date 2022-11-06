#include <stdio.h>

void main()
{
    int n1, n2, n3, n4, r, LCM;
    printf("Enter two number: ");
    scanf("%d%d", &n1, &n2);
    n3 = n1;
    n4 = n2;
    while (n4 != 0)
    {
        r = n3 % n4;
        n3 = n4;
        n4 = r;
    }
    LCM = (n1 * n2) / n3;
    printf("LCM: %d", LCM);
}