#include <stdio.h>
#include <string.h>

void main()
{

    char str1[100], str2[100];

    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int i, j = 0;

    i = strlen(str1);

    while (str2[j] != '\0')
    {
        str1[i] = str2[j];

        i++;
        j++;
    }
    str1[i] = '\0';

    puts(str1);
}
