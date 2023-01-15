#include <stdio.h>
#include <stdlib.h>

typedef struct ToDo todo;

// Declaration of structure
struct ToDo {
	char buffer[101];
	todo* next;
	int count;
};

todo* start = NULL;


int main()
{
	int choice;
	splashScreen();

	while (1) {
		system("cls");

		printf("1. To see your ToDo list\n");
		printf("2. To create new ToDo\n");
		printf("3. To delete your ToDo\n");
		printf("4. Exit");
		printf("\n\nEnter your choice:");

		scanf("%d", &choice);

		switch (choice) {
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
	return 0;
}

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

// To view all the todos
void seeNotes()
{
    // Clearing the console
    system("cls");

    // Pointer to the node for traversal
    todo *temp;

    // temp is made to point the
    // start of linked list
    temp = start;

    // Condition for empty linked list
    if (start == NULL)
        printf("\n\nEmpty ToDo \n\n");

    // Traverse until last node
    while (temp != NULL)
    {

        // Print number of the node
        printf("%d.)", temp->count);

        // Print data of the node
        puts(temp->buffer);

        // Clear output console
        fflush(stdin);

        // Going to next node
        temp = temp->next;
    }

    printf("\n\n\n");
    system("pause");
}

// Function to insert a note todo
void createNotes()
{
    // Choose choice from user
    char c;

    // Pointers to note
    todo *add, *temp;
    system("cls");

    // Open a binary file for writing
    FILE *fp = fopen("notes.bin", "wb");

    // Infinite loop which will
    // break if "n" is pressed
    while (1) {

        printf("\nWant to add new Press 'y' for Yes and 'n' for no");
		printf(":");
        fflush(stdin);

        // Input from user
        scanf("%c", &c);

        if (c == 'n')
            break;
        else {

            if (start == NULL) {

                add = (todo*)calloc(1, sizeof(todo));

                start = add;
                printf("\nPress Enter when you are done\n");

                // Input from user
                fflush(stdin);
                gets(add->buffer);

                // As first input so count is 1
                add->count = 1;

                // As first note so
                // start's next is NULL
                start->next = NULL;

                // Write the first note to the binary file
                fwrite(add, sizeof(todo), 1, fp);
            }
            else {
                temp = (todo*)calloc(1, sizeof(todo));
                printf("\nPress Enter when you are done\n");
                fflush(stdin);
                gets(temp->buffer);

                // Insertion is at last so pointer part is NULL
                temp->next = NULL;

                // add is now pointing newly created note
                add->next = temp;
                add = add->next;

                // Write the new note to the binary file
                fwrite(add, sizeof(todo), 1, fp);
            }

            // Using the concept of
            // insertion at the end,
            // adding a todo

            // Calling function to adjust
            // the count variable
            adjustcount();
        }
    }
    // Close the binary file
    fclose(fp);
}

// Function to delete the todo
void deleteNotes()
{
    system("cls");

    // To get the numbering of the
    // todo to be deleted
    int x, count;

    todo *del, *temp;
    printf("\nEnter the ToDo's number that you want to remove.\n\t");

    // Checking empty condition
    if (start == NULL){
        printf("\n\nThere is no ToDo");
        printf(" for today :-)\n\n\n");
    }
    else {
        scanf("%d", &x);

        // Open a binary file for reading and writing
        FILE *fp = fopen("notes.bin", "r+b");

        // del will point to start
        del = start;

        // temp will point to start's next so that traversal and deletion is achieved easily
        temp = start->next;

        // Running infinite loop so that user can delete and asked again for choice
        while (1) {

            // When the values matches,delete the note
            if (del->count == x) {

                // When the note to be deleted is first note
                start = start->next;

                // Deallocating the memory of the deleted note
                free(del);

                // Adjusting the count when note is deleted
                adjustcount();
                break;
            }

            if (temp->count == x) {
                del->next = temp->next;
                free(temp);
                adjustcount();
                break;
            }
            else {
                del = temp;
                temp = temp->next;
            }
        }
        // Seek to the beginning of the binary file
        fseek(fp, 0, SEEK_SET);

        // Write the updated linked list to the binary file
        fwrite(start, sizeof(todo),count, fp);

        // Close the binary file
        fclose(fp);
    }
    system("pause");
}

void adjustcount()
{

	todo* temp;
	int i = 1;
	temp = start;

	// Running loop until last note	and numbering it one by one
	while (temp != NULL) {
		temp->count = i;
		i++;
		temp = temp->next;
	}
}
