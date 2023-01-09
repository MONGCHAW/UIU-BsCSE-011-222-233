#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NOTE_LENGTH 1000

// Struct to represent a note
struct Note {
    char text[MAX_NOTE_LENGTH];
    time_t timestamp;
};

// Function prototypes
void create_note();
void view_notes();
void edit_note();
void delete_note();

int main() {
    int choice;

    while (1) {
        printf("1. Create a new note\n");
        printf("2. View all notes\n");
        printf("3. Edit a note\n");
        printf("4. Delete a note\n");
        printf("5. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create_note();
                break;
            case 2:
                view_notes();
                break;
            case 3:
                edit_note();
                break;
            case 4:
                delete_note();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice\n");
                break;
        }
    }

    return 0;
}

// Function to create a new note
void create_note() {
    struct Note note;
    time_t current_time;
    char buffer[MAX_NOTE_LENGTH];

    // Get the current time
    time(&current_time);

    // Prompt the user for the note text
    printf("Enter the note text: ");
    fgets(buffer, MAX_NOTE_LENGTH, stdin);
    buffer[strcspn(buffer, "\n")] = 0;

    // Store the note text and timestamp in the struct
    strcpy(note.text, buffer);
    note.timestamp = current_time;

    // Open the file for writing in binary mode
    FILE *fp = fopen("notes.bin", "ab");

    // Write the struct to the file
    fwrite(&note, sizeof(struct Note), 1, fp);

    // Close the file
    fclose(fp);
}

// Function to view all notes
void view_notes() {
    struct Note note;

    // Open the file for reading in binary mode
    FILE *fp = fopen("notes.bin", "rb");

    // Read the structs from the file and print them to the screen
    while (fread(&note, sizeof(struct Note), 1, fp) == 1) {
        printf("%s", note.text);
        printf("Created on: %s", ctime(&note.timestamp));
    }

    // Close the file
    fclose(fp);
}

// Function to edit a note
void edit_note() {
    struct Note note;
    char buffer[MAX_NOTE_LENGTH];
    int index;

    // Prompt the user for the index of the note to edit
    printf("Enter the index of the note to edit: ");
    scanf("%d", &index);
    // Open the file for reading and writing in binary mode
    FILE *fp = fopen("notes.bin", "r+b");

    // Seek to the correct position in the file
    fseek(fp, index * sizeof(struct Note), SEEK_SET);

    // Read the note from the file
    fread(&note, sizeof(struct Note), 1, fp);

    // Prompt the user for the new note text
    printf("Enter the new note text: ");
    fgets(buffer, MAX_NOTE_LENGTH, stdin);
    buffer[strcspn(buffer, "\n")] = 0;

    // Update the note text and timestamp in the struct
    strcpy(note.text, buffer);
    note.timestamp = time(NULL);

    // Seek back to the correct position in the file
    fseek(fp, index * sizeof(struct Note), SEEK_SET);

    // Write the modified struct to the file
    fwrite(&note, sizeof(struct Note), 1, fp);

    // Close the file
    fclose(fp);
}
// Function to delete a note
void delete_note() {
    int index;

    // Prompt the user for the index of the note to delete
    printf("Enter the index of the note to delete: ");
    scanf("%d", &index);

    // Open the file for reading and writing in binary mode
    FILE *fp = fopen("notes.bin", "r+b");

    // Seek to the correct position in the file
    fseek(fp, index * sizeof(struct Note), SEEK_SET);

    // Overwrite the note with empty data
    struct Note empty = {0};
    fwrite(&empty, sizeof(struct Note), 1, fp);

    // Close the file
    fclose(fp);
}

   
