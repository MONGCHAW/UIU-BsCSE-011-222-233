 #include<stdio.h>
 #include <math.h>
 int main()
 {
//Initializing values
    float val,fVal,cVal;                   /*Unintialized values here val = value , fVal = floor value and cVal = ceiling value*/

//Taking the Inputs                                         
    printf("Enter a float value: ");
    scanf("%f",&val);
    
//Floor and Ceiling Value with the help of math.h
    fVal=floor(val);
    cVal =ceil(val);

//Printing the answers
    printf("your number was:%f \nfloor value:%f \nceil value:%f\n",val,fVal,cVal);
    return 0;
}
                                                            

