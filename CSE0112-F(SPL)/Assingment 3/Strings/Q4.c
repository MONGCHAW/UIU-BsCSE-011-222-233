#include <stdio.h>
#include <string.h>

void main()
{
    int i = 0, count = 1;

    char s[999];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    while (s[i] != '\0')
    {
        if ((s[i] == ' ' || s[i] == '\n') && i != 0)
        {
            count++;
        }
        i++;
    }
    printf("%d", count);
}
