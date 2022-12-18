#include <stdio.h>
#include <string.h>
void main()
{

    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i = 0, l = 0;

    while (str[i] != '\0')
    {
        l++;
        i++;
    }

    printf("%d", l);
}
