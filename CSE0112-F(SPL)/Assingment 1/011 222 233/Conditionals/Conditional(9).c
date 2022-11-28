#include <stdio.h>

void main()
{

    // Initiazlizing Variables

    char ch; // Unintialized Variables

    // Inputing Character

    printf("Enter any character: ");
    scanf("%c", &ch);

    // Conditinal Oparations

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is Vowel.", ch);
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is Consonant.", ch);
    }
}