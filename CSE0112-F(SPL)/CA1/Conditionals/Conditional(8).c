#include <stdio.h>

void main()
{

   // Initiazlizing Variables

    char ch; // Unintialized Variables

   // Inputing Character
   
    printf("Enter any character: ");
    scanf("%c", &ch);

   // Conditinal Oparations

    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c is lowercase alphabet.", ch);
    } 
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c is uppercase alphabet.", ch);
    }    
    else
    {
        printf("%c is not an alphabet.", ch);
    }
}