#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a book
typedef struct Book 
{
    char *title;
    char *author;
    int year;
} Book;


int login() 
{
    char username[20];
    char password[20];

    printf("Enter username: ");
    scanf("%19s", username);
    printf("Enter password: ");
    scanf("%19s", password);

    // Dummy authentication
    if (strcmp(username, "admin") == 0 && strcmp(password, "admin123") == 0) 
    {
        printf("Login successful.\n");
        return 1;
    } 
    else {
        printf("Login failed.\n");
        return 0;
    }
}

void addBook() 
{
    FILE *fp;
    Book newBook;

    // Allocate memory for the new book title and author
    newBook.title = (char *)malloc(100 * sizeof(char));
    newBook.author = (char *)malloc(100 * sizeof(char));
    if (newBook.title == NULL || newBook.author == NULL) 
    {
        printf("Memory allocation failed\n");
        if (newBook.title != NULL) free(newBook.title);
        if (newBook.author != NULL) free(newBook.author);
        return;
    }

    // Input book details
    printf("Enter book title: ");
    getchar(); // Clear input buffer
    fgets(newBook.title, 100, stdin);
    newBook.title[strcspn(newBook.title, "\n")] = '\0'; // Remove trailing newline
    printf("Enter author name: ");
    fgets(newBook.author, 100, stdin);
    newBook.author[strcspn(newBook.author, "\n")] = '\0'; // Remove trailing newline
    printf("Enter publication year: ");
    scanf("%d", &newBook.year);

    // Open file in append mode
    fp = fopen("books.dat", "ab");
    if (fp == NULL) 
    {
        printf("Failed to open file\n");
        free(newBook.title);
        free(newBook.author);
        return;
    }

    // Write book information to file
    fwrite(&newBook, sizeof(Book), 1, fp);

    // Close file and free memory
    fclose(fp);
    free(newBook.title);
    free(newBook.author);

    printf("Book added successfully\n");
}

void searchBook() 
{
    FILE *fp;
    Book searchBook;
    int found = 0;

    // Allocate memory for the search book title
    searchBook.title = (char *)malloc(100 * sizeof(char));
    if (searchBook.title == NULL) 
    {
        printf("Memory allocation failed\n");
        return;
    }

    // Input book title to search
    printf("Enter the title of the book to search: ");
    getchar(); // Clear input buffer
    fgets(searchBook.title, 100, stdin);
    searchBook.title[strcspn(searchBook.title, "\n")] = '\0'; // Remove trailing newline

    // Open file in read mode
    fp = fopen("books.dat", "rb");
    if (fp == NULL) 
    {
        printf("Failed to open file\n");
        free(searchBook.title);
        return;
    }

    // Search for book in file
    while (fread(&searchBook, sizeof(Book), 1, fp)) 
    {
        if (strcmp(searchBook.title, searchBook.title) == 0) {
            printf("Book found:\n");
            printf("Title: %s\n", searchBook.title);
            printf("Author: %s\n", searchBook.author);
            printf("Year: %d\n", searchBook.year);
            found = 1;
            break;
        }
    }

    if (!found) 
    {
        printf("Book not found\n");
    }

    // Close file
    fclose(fp);
    free(searchBook.title);
}

void issueBook() 
{
    FILE *fp;
    FILE *temp_fp;
    Book book;
    char title[100];
    int found = 0;

    // Input book title to issue
    printf("Enter the title of the book to issue: ");
    getchar(); // Clear input buffer
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0'; // Remove trailing newline

    // Open original file in read mode
    fp = fopen("books.dat", "rb");
    if (fp == NULL) {
        printf("Failed to open file\n");
        return;
    }

    // Open temporary file in write mode
    temp_fp = fopen("temp.dat", "wb");
    if (temp_fp == NULL) 
    {
        printf("Failed to open temporary file\n");
        fclose(fp);
        return;
    }

    // Search for book in file and mark as issued
    while (fread(&book, sizeof(Book), 1, fp)) 
    {
        if (strcmp(book.title, title) == 0) 
        {
            found = 1;
            printf("Book \"%s\" issued successfully.\n", title);
            continue;
        }
        fwrite(&book, sizeof(Book), 1, temp_fp);
    }

    if (!found) 
    {
        printf("Book \"%s\" not found\n", title);
    }

    // Close original and temporary files
    fclose(fp);
    fclose(temp_fp);

    // Remove original file and rename temporary file
    remove("books.dat");
    rename("temp.dat", "books.dat");
}

void deleteRecord() 
{
    FILE *fp;
    FILE *temp_fp;
    Book book;
    char title[100];
    int found = 0;

    // Input book title to delete
    printf("Enter the title of the book to delete: ");
    getchar(); // Clear input buffer
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0'; // Remove trailing newline

    // Open original file in read mode
    fp = fopen("books.dat", "rb");
    if (fp == NULL) 
    {
        printf("Failed to open file\n");
        return;
    }

    // Open temporary file in write mode
    temp_fp = fopen("temp.dat", "wb");
    if (temp_fp == NULL) 
    {
        printf("Failed to open temporary file\n");
        fclose(fp);
        return;
    }

    // Search for book in file and delete record
    while (fread(&book, sizeof(Book), 1, fp))
     {
        if (strcmp(book.title, title) == 0) {
            found = 1;
            printf("Record for book \"%s\" deleted successfully.\n", title);
            continue;
        }
        fwrite(&book, sizeof(Book), 1, temp_fp);
    }

    if (!found) 
    {
        printf("Book \"%s\" not found\n", title);
    }

    // Close original and temporary files
    fclose(fp);
    fclose(temp_fp);

    // Remove original file and rename temporary file
    remove("books.dat");
    rename("temp.dat", "books.dat");
}

void viewRecord() 
{
    FILE *fp;
    Book book;

    // Open file in read mode
    fp = fopen("books.dat", "rb");
    if (fp == NULL) 
    {
        printf("Failed to open file\n");
        return;
    }

    // Display records of all books
    printf("Records of all books:\n");
    while (fread(&book, sizeof(Book), 1, fp)) 
    {
        printf("Title: %s\n", book.title);
        printf("Author: %s\n", book.author);
        printf("Year: %d\n", book.year);
        printf("\n");
    }

    // Close file
    fclose(fp);
}


int main() 
{
    // Perform login authentication
    if (!login()) 
    {
        printf("Login failed. Exiting...\n");
        return 0;
    }

    // Main menu loop
    int choice;
    do {
        printf("\nLibrary Management System Menu\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Issue Book\n");
        printf("4. Delete Record\n");
        printf("5. View Record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                searchBook();
                break;
            case 3:
                issueBook();
                break;
            case 4:
                deleteRecord();
                break;
            case 5:
                viewRecord();
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}


