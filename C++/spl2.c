#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASSWORD "admin" // Define password

// Define the Book structure
typedef struct Book 
{
    int id;
    char title[100];
    char author[100];
    int quantity;
    struct Book *next;
} Book;

// Function to create a new Book node
Book* create_book(int id, const char *title, const char *author, int quantity) 
{
    Book *new_book = (Book *) malloc(sizeof(Book));
    if (new_book == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    new_book->id = id;
    strncpy(new_book->title, title, sizeof(new_book->title) - 1);
    new_book->title[sizeof(new_book->title) - 1] = '\0'; // Ensure null termination
    strncpy(new_book->author, author, sizeof(new_book->author) - 1);
    new_book->author[sizeof(new_book->author) - 1] = '\0'; // Ensure null termination
    new_book->quantity = quantity;
    new_book->next = NULL;
    return new_book;
}

// Function to add a new book to the list
void add_book(Book **head, int id, const char *title, const char *author, int quantity) {
    Book *new_book = create_book(id, title, author, quantity);
    new_book->next = *head;
    *head = new_book;
}


// Function to search for a book by title
Book* search_book_by_title(Book *head, const char *title) {
    Book *current = head;
    while (current != NULL) {
        if (strcmp(current->title, title) == 0) {
            return current;
        }
        current = current->next;
    }
    return NULL; // Return NULL if no book with the given title is found
}

// Function to authenticate user login
int authenticate() {
    char password[50];
    printf("Enter password: ");
    scanf("%s", password);
    if (strcmp(password, PASSWORD) == 0)
        return 1; // Return true if password is correct
    else
        return 0; // Return false if password is incorrect
}

// Function to save book data to file
void save_books(Book *head) {
    FILE *file = fopen("books.dat", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    Book *current = head;
    while (current != NULL) {
        fwrite(&(current->id), sizeof(int), 1, file);
        fwrite(current->title, sizeof(char), sizeof(current->title), file);
        fwrite(current->author, sizeof(char), sizeof(current->author), file);
        fwrite(&(current->quantity), sizeof(int), 1, file);
        current = current->next;
    }

    fclose(file);
}

// Function to load book data from file
Book* load_books() {
    FILE *file = fopen("books.dat", "rb");
    if (file == NULL) {
        printf("No existing data found.\n");
        return NULL;
    }

    Book *head = NULL;
    Book *current = NULL;

    while (1) {
        current = (Book *)malloc(sizeof(Book)); // Allocate memory for the new book
        if (current == NULL) {
            printf("Memory allocation failed.\n");
            fclose(file);
            exit(EXIT_FAILURE);
        }

        // Read ID
        if (fread(&(current->id), sizeof(int), 1, file) != 1) {
            free(current); // Free the memory allocated
            break; // Exit loop if reading fails
        }

        // Read title
        if (fread(current->title, sizeof(char), sizeof(current->title), file) != sizeof(current->title)) {
            free(current); // Free the memory allocated
            break; // Exit loop if reading fails
        }
        current->title[sizeof(current->title) - 1] = '\0'; // Ensure null termination

        // Read author
        if (fread(current->author, sizeof(char), sizeof(current->author), file) != sizeof(current->author)) {
            free(current); // Free the memory allocated
            break; // Exit loop if reading fails
        }
        current->author[sizeof(current->author) - 1] = '\0'; // Ensure null termination

        // Read quantity
        if (fread(&(current->quantity), sizeof(int), 1, file) != 1) {
            free(current); // Free the memory allocated
            break; // Exit loop if reading fails
        }

        current->next = head;
        head = current;
    }

    fclose(file);
    return head;
}


// Function to add a book to the library
void add_book_function(Book **head) {
    int id, quantity;
    char title[100], author[100];
    printf("Enter Book ID: ");
    scanf("%d", &id);
    printf("Enter Book Title: ");
    scanf(" %[^\n]", title);
    printf("Enter Book Author: ");
    scanf(" %[^\n]", author);
    printf("Enter Book Quantity: ");
    scanf("%d", &quantity);
    add_book(head, id, title, author, quantity);
}

// Function to search for a book in the library
void search_book_function(Book *head) {
    char title[100];
    printf("Enter Book Title to Search: ");
    scanf(" %[^\n]", title);
    Book *book = search_book_by_title(head, title);
    if (book != NULL) {
        printf("Book Found: ID: %d | Title: %s | Author: %s | Quantity: %d\n", book->id, book->title, book->author, book->quantity);
    } else {
        printf("Book not found.\n");
    }
}

// Function to issue a book from the library
void issue_book_function(Book *head) {
    int id;
    printf("Enter Book ID to Issue: ");
    scanf("%d", &id);
    Book *book = head;
    while (book != NULL) {
        if (book->id == id) {
            if (book->quantity > 0) {
                book->quantity--;
                printf("Book '%s' issued successfully.\n", book->title);
                return;
            } else {
                printf("Sorry, '%s' is out of stock.\n", book->title);
                return;
            }
        }
        book = book->next;
    }
    printf("Book with ID %d not found.\n", id);
}

// Function to delete a record of a book issued
void delete_record_function(Book **head) {
    int id;
    printf("Enter Book ID to Delete Record: ");
    scanf("%d", &id);
    Book *current = *head;
    Book *prev = NULL;
    while (current != NULL) {
        if (current->id == id) {
            if (prev == NULL) {
                *head = current->next;
            } else {
                prev->next = current->next;
            }
            free(current);
            printf("Record deleted successfully.\n");
            return;
        }
        prev = current;
        current = current->next;
    }
    printf("Book with ID %d not found.\n", id);
}

// Function to view record of books issued

// Function to view record of books issued
void view_record_function(Book *head) {
    printf("\nRecord of Books Issued:\n");
    int count = 0;
    Book *current = head;
    while (current != NULL) {
        if (current->quantity < 10 && current->quantity > 0) {
            printf("ID: %d | Title: %s | Author: %s | Quantity: %d\n", current->id, current->title, current->author, current->quantity);
            count++;
        }
        current = current->next;
    }
    if (count == 0) {
        printf("No books with quantity less than 10 are issued.\n");
    }
}

void main_menu(Book **head) {
    int choice;
    while (1) {
        printf("\n--- LIBRARY MANAGEMENT SYSTEM ---\n");
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
                add_book_function(head);
                break;
            case 2:
                search_book_function(*head);
                break;
            case 3:
                issue_book_function(*head);
                break;
            case 4:
                delete_record_function(head);
                break;
            case 5:
                view_record_function(*head);
                break;
            case 6:
                save_books(*head);
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

int main() {
    int login_attempts = 3;
    while (login_attempts > 0) {
        if (authenticate()) {
            printf("Login successful.\n");
            break;
        } else {
            printf("Incorrect password. %d attempts remaining.\n", --login_attempts);
        }
    }

    if (login_attempts == 0) {
        printf("You have exceeded the maximum number of login attempts. Exiting...\n");
        return 1;
    }

    Book *head = load_books();
    main_menu(&head);
    return 0;
}
