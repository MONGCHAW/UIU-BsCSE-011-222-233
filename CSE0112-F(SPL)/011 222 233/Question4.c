#include <stdio.h>

void main() {

    char cat ;
    int year, family;
    float salary;

    printf("Enter your Catagory:");
    scanf("%ch",&cat);

    printf("Enter your Work year:");
    scanf("%d",&year);

    printf("Enter your Number of Family Member:");
    scanf("%d",&family);

    printf("Enter your Current Salary:");
    scanf("%f",&salary);


    if (year  >= 12 && family > 5  || salary < 1000.50)
    {
        printf("Will receive the bonus");
    }
    else if (cat == 'y' && family > 8 && salary < 1100.78 || cat == 'z' && family > 8 && salary < 1100.78 || cat == 'x' && family > 8)
    {
        printf("Will receive the bonus");
    }else{
        printf("Will not receive the bonus");
        
    }
}