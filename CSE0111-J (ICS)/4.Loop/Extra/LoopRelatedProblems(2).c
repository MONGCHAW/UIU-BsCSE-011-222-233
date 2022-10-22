/**
 * * Your task is to write a program that will calculate the sum of the following series up to its nth term.
 * ! Be careful about the postive and negetive signs of terms
 * ? Check the attached photo for the actual question
 * 
 */

#include <stdio.h>

int main()
{
// Intializing Number

    int n;                                  // Uninitalzed variable
    float sum = 0;                          //! SUM SHOULD ALWAYS BE ZERO AS THERE'S ALWAYS A PRE DETERMINED SUM ON MEMORY
    float numerator_1 = 1, numerator_2 = 2; /** The numerator has two side and both are increamenting so we increment them by 
                                            * there respective numbers
                                            * In this case the nume1 has 1 as the start and the nume2 has 2 as a begining
                                            */
    float denumerator = 5;                  //  The denumerator also increments by a certain number but the start of it is 5

// Inputting the number of N

    printf("Enter the number of n:");
    scanf( "%d" , &n );

//Loop

    for ( int i = 1; i <= n; i++ )
    {
        if ( i % 2 == 0)
            sum -= (numerator_1 * ( numerator_2 * numerator_2 )) / denumerator;
        
        else
            sum += (numerator_1 * ( numerator_2 * numerator_2 )) / denumerator;

        numerator_1 += 2;
        numerator_2 *= 3;
        denumerator += 4;
    }
    /** 
     * * If N is even than follow the - if its odd than follow the + pattern after that we wrote down the equotion
     * * Since the numerator 1 increments by 2 we put that inside the loop same for the numerator 2 sine it increaments by 3
     * * denumerator increaments by 4 so we also add that
     * ! Becareful to check all the tags and closing for the loop as missing this can cause !
     * ! something to break in your program and you cant find it later on !
     */ 

//Printing results

    printf("%.2f\n", sum);

return 0;
}