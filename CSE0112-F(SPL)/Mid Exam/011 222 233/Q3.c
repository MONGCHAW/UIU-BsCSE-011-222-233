#include <stdio.h>

void main()

{


    int n, r, m = 1, bin = 0, sum = 0;
    scanf("%d", &n);


    while (n != 0)
    {
        r = n % 2;
        bin = bin + (r * m);
        m = m * 10;
        n = n / 2;

        if (r == 1)
        {
            sum++;
        }

    }


    printf("%d||%d", bin, sum);


}
