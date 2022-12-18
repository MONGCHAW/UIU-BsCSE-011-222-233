#include <stdio.h>
#include <string.h>

void main()
{
    int i = 0, count = 0;

    char s[9999];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    while (s[i] != '\0')
    {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] =='o' || s[i]=='O' || s[i] == 'u' || s[i] == 'U')
            count++;
        i++;
    }

    printf("%d", count);
}
