#include <stdio.h>
    int main(void)
    {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        float A, HW, CT, MT, TF, score;
    
        scanf("%f %f %f %f %f", &A, &HW, &CT, &MT, &TF);
    
        MT = (MT / 50) * 30;
        TF = (TF / 100) * 40;
    
        score = A + HW + CT + MT + TF;
    
        if (score >= 90)
            printf("Student %d: A\n", i);
        else if (score >= 86)
            printf("Student %d: A-\n", i);
        else if (score >= 82)
            printf("Student %d: B+\n", i);
        else if (score >= 78)
            printf("GStudent %d: B\n", i);
        else if (score >= 74)
            printf("Student %d: B-\n", i);
        else if (score >= 70)
            printf("Student %d: C+\n", i);
        else if (score >= 66)
            printf("Student %d: C\n", i);
        else if (score >= 62)
            printf("Student %d: C-\n", i);
        else if (score >= 58)
            printf("Student %d: D+\n", i);
        else if (score >= 55)
            printf("Student %d: D\n", i);
        else
            printf("Student %d: F\n", i);
    }
    
    return 0;
    }