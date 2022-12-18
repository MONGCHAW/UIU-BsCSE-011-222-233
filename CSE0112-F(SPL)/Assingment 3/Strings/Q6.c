#include <stdio.h>
#include <string.h>

int main()
{

    int i, j;
    char s[100];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    i = 0;

    while(s[i]!='\0')
    {
        if(s[i]>='a' && s[i] <= 'z')
        {
            s[i]-=32;
        }
        i++;
    }
    puts(s);
}
