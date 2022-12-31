// C program for the above approach
#include <stdio.h>
#include <stdlib.h>

typedef struct ToDo todo;

struct ToDo
{
    // char array as data part
    char buffer[101];

    // Pointer part to access addresses
    todo *next;

    // Count variable for counting the number of nodes
    int count;
};
todo *start = NULL;

// Code for Splash screen
void splashScreen()
{
    printf("\n");
    printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf("\t} : } : } : } : } : }  : } : } : } Welcome to the Note Taking App : { : { : { : { : { : { : { : { : {\n\n");
    printf("\t} : } : } : } : } : }  : } : } Press ENTER to start the Note Taking APP  : { : { : { : { : { : { : {\n\n");
    printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n");
    system("pause");
}

// Function to insert a node todo
void createNotes()
{
    system("cls");
    printf("Make Note's\n");
    system("pause");
}

// Function to delete the todo
void deleteNotes()
{
    system("cls");
    printf("Delete ToDo's\n");
    system("pause");
}
void seeNotes()
{
    system("cls");
    printf("See The ToDo's\n");
    system("pause");

}
// Function to adjust the numbering of the nodes
void adjustcount()
{
    // For traversal, using
    // a node pointer
    todo *temp;
    int i = 1;
    temp = start;

    // Running loop until last node
    // and numbering it one by one
    while (temp != NULL)
    {
        temp->count = i;
        i++;
        temp = temp->next;
    }
}

// Driver Code
void main()
{
    int choice;
    splashScreen();

    while (1)
    {
        // Clear the console
        system("cls");

        printf("1. To see your Notes list\n");
        printf("2. To create new Notes\n");
        printf("3. To delete your Notes\n");
        printf("4. Exit");
        printf("\n\nEnter your choice :\t");

        // Choice from the user
        scanf("%d", &choice);

        switch (choice)
        {

        // Calling functions as per the user input
        case 1:
            seeNotes();
            break;
        case 2:
            createNotes();
            break;
        case 3:
            deleteNotes();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("\nInvalid Choice :-(\n");
            system("pause");
        }
    }
}
