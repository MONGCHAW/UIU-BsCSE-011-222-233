#include <stdio.h>
#include <string.h>

int main()

{
    int i, j = 0;
    char s[100];
    char r[100];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    i = strlen(s);
    i = i-1;

    while(i>=0)
    {
        r[j] = s[i];
        i--;
        j++;
    }
    r[j] = '\0';
    puts(r);
}
