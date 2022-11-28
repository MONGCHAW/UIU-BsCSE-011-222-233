#include <stdio.h>

void main()
{
    int i, n = 0;
    printf("Enter the number: ");
    scanf("%d", &i);

    while(i != 0)
    {
        n = (n * 10) + (i % 10);
        i /= 10;
    }

    while(n!=0){
        switch(n % 10){
            case 0: printf("Zero ");
                break;
            case 1: printf("One ");
                break;
            case 2: printf("Two ");
                break;
            case 3: printf("Three ");
                break;
            case 4: printf("Four ");
                break;
            case 5: printf("Five ");
                break;
            case 6: printf("Six ");
                break;
            case 7: printf("Seven ");
                break;
            case 8: printf("Eight ");
                break;
            case 9: printf("Nine ");
                break;
        }
        n=n/10;
    }
}