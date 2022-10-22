#include<stdio.h>

void main(){
    

//Initializing values

    char charType;
    int intType;
    long longType;
    float floatType;                  /*Unintialized values*/


//Printing the answers

    printf("Size of char: %ld byte\n",sizeof(charType));            //* Characters
    
    printf("Size of int: %ld bytes\n",sizeof(intType));             //* Integer
    
    printf("Size of float: %ld bytes\n",sizeof(floatType));         //* Float
    
    printf("Size of long: %ld bytes\n",sizeof(longType));           //* Long Float


}
