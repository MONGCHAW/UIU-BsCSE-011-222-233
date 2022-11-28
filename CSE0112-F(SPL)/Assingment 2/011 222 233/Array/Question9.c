#include <stdio.h>
 

void printArray(int arr[], int len)
{
    int i;
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}
 

void main()
{
    int size;
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    
    int len = sizeof(original_arr)/sizeof(original_arr[0]);
 
    int copied_arr[len], i, j;
    

    for (i = 0; i < len; i++) {
        copied_arr[i] = original_arr[len - i - 1];
    }
 
    // Printing the original array
    printf("\nArray A: ");
    printArray(original_arr, len);
 
    // Printing the reversed array
    printf("\nArray B: ");
    printArray(copied_arr, len);
 
}