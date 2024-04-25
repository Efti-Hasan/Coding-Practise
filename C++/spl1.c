#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 50
#define MAX_BOOKS 100
#define FILENAME "library_data.txt"

// Structure to represent a book
typedef struct {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int is_issued;
} Book;

// Function to add a book
void add_book(Book *books, int *num_books) 
{
    if (*num_books == MAX_BOOKS) 
    {
        printf("Maximum number of books reached.\n");
        return;
    }

    printf("Enter title: ");
    scanf("%s", books[*num_books].title);
    printf("Enter author: ");
    scanf("%s", books[*num_books].author);
    books[*num_books].is_issued = 0; // Set as not issued
    (*num_books)++;
}

// Function to search for a book
void search_book(Book *books, int num_books) {
    char title[MAX_TITLE_LENGTH];
    printf("Enter title to search: ");
    scanf("%s", title);

    int found = 0;
    for (int i = 0; i < num_books; i++) {
        if (strcmp(books[i].title, title) == 0) 
        {
            printf("Book found:\n");
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Status: %s\n", books[i].is_issued ? "Issued" : "Available");
            found = 1;
            break;
        }
    }

    if (!found) 
    {
        printf("Book not found.\n");
    }
}

// Function to issue a book
void issue_book(Book *books, int num_books) 
{
    char title[MAX_TITLE_LENGTH];
    printf("Enter title of book to issue: ");
    scanf("%s", title);

    int found = 0;
    for (int i = 0; i < num_books; i++) 
    {
        if (strcmp(books[i].title, title) == 0) {
            if (books[i].is_issued) {
                printf("Book is already issued.\n");
            } else {
                books[i].is_issued = 1;
                printf("Book '%s' issued successfully.\n", title);
            }
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

// Function to delete record of issued book
void delete_record(Book *books, int *num_books) {
    char title[MAX_TITLE_LENGTH];
    printf("Enter title of book to delete record: ");
    scanf("%s", title);

    int found = 0;
    for (int i = 0; i < *num_books; i++) {
        if (strcmp(books[i].title, title) == 0) {
            if (books[i].is_issued) {
                books[i].is_issued = 0;
                printf("Record of book '%s' deleted successfully.\n", title);
            } else {
                printf("Record of book '%s' not found.\n", title);
            }
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

// Function to view record of issued books
void view_record(Book *books, int num_books) {
    printf("Records of issued books:\n");
    int found = 0;
    for (int i = 0; i < num_books; i++) {
        if (books[i].is_issued) {
            printf("Title: %s, Author: %s\n", books[i].title, books[i].author);
            found = 1;
        }
    }

    if (!found) {
        printf("No records found.\n");
    }
}

// Function to save books data to file
void save_books(Book *books, int num_books) {
    FILE *fp = fopen(FILENAME, "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    fwrite(&num_books, sizeof(int), 1, fp);
    fwrite(books, sizeof(Book), num_books, fp);

    fclose(fp);
}

// Function to load books data from file
void load_books(Book *books, int *num_books) {
    FILE *fp = fopen(FILENAME, "rb");
    if (fp == NULL) {
        printf("No existing data found.\n");
        return;
    }

    fread(num_books, sizeof(int), 1, fp);
    fread(books, sizeof(Book), *num_books, fp);

    fclose(fp);
}

int main() {

    char username[50];
    char password[30];


    printf("username:");
    fgets(username, sizeof(username), stdin);
    printf("password:");
    fgets(password, sizeof(password), stdin);

    // Remove newline character from username and password
    username[strcspn(username, "\n")] = '\0';
    password[strcspn(password, "\n")] = '\0';

    if(strcmp(password,"33311")==0) {
        printf("welcome\n");
    } else {
        printf("invalid password\n");
        return 1; // Exit the program if password is incorrect
    }

    Book *books = malloc(MAX_BOOKS * sizeof(Book)); // Allocate memory for books
    int num_books = 0;

    load_books(books, &num_books); // Load book data from file

    int choice;
    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Issue Book\n");
        printf("4. Delete Record\n");
        printf("5. View Record\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_book(books, &num_books);
                break;
            case 2:
                search_book(books, num_books);
                break;
            case 3:
                issue_book(books, num_books);
                break;
            case 4:
                delete_record(books, &num_books);
                break;
            case 5:
                view_record(books, num_books);
                break;
            case 0:
                save_books(books, num_books); // Save book data to file
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    free(books); // Free dynamically allocated memory

    return 0;
}
