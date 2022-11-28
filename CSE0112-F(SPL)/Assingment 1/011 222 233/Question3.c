#include <stdio.h>

void main() {  
    //Initilizing Value

    int score;  

        printf("Enter the scores:");
        scanf("%d", &score);     

    /* 
    * Filter Oparations
    ? Using If Statements as it should be more efficiant (?)
    */ 

        if      (score <  0  || score  > 100)  {   printf("Wrong Entry");} //*Invalid if Wrong Input
        else if (score <= 54 && score  > 0  )  {   printf("Grade: F"   );} //* 0-54   ( F )
        else if (score >= 55 && score  < 57 )  {   printf("Grade: D"   );} //* 55-57  ( D )
        else if (score >= 58 && score  < 61 )  {   printf("Grade: D+"  );} //* 58-61  ( D+)
        else if (score >= 62 && score  < 65 )  {   printf("Grade: C-"  );} //* 62-65  ( C-)
        else if (score >= 66 && score  < 69 )  {   printf("Grade: C"   );} //* 66-69  ( C )
        else if (score >= 70 && score  < 73 )  {   printf("Grade: C+"  );} //* 70-73  ( C+)
        else if (score >= 74 && score  < 77 )  {   printf("Grade: B-"  );} //* 74-77  ( B-)
        else if (score >= 78 && score  < 81 )  {   printf("Grade: B"   );} //* 78-81  ( B )
        else if (score >= 82 && score  < 85 )  {   printf("Grade: B+"  );} //* 82-85  ( B+)
        else if (score >= 86 && score  < 89 )  {   printf("Grade: A-"  );} //* 86-89  ( A-)
        else                                   {   printf("Grade: A"   );} //* 90-100 ( A )

    /**
     * ? Sir is using "else if" more efficiant than using "nested if" or is this the other way around?
     */

}