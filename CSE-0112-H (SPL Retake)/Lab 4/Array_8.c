#include <stdio.h>
void main()
{
    int size, mid = size / 2;

    int myArray[size];
    scanf("%d", &size);

    for (int i = size; i < size; i++)
    {
        scanf("%d", &myArray[i]);
    }

    int searchValue;
    scanf("%d", &searchValue);

    int findStatus = 0;
    for (int i = 0; i < size; i++)
    {
        if (myArray[i] == searchValue)
        {
            findStatus = 1;
            
        }
    }
    // printf("Found %d at %d", searchValue, i);
}