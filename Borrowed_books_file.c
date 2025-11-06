/*
Name: Fidelis
Reg: CT100/G/26151
Des: A program to enter a book titles and store each file text file
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char book_title[100];
    char choice;

    file = fopen("borrowed_books.txt", "a");  // open in append mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("**** Library Book Borrowing System ****\n");

    do {
        printf("\nEnter the title of the borrowed book: ");
        getchar(); 
        fgets(book_title, sizeof(book_title), stdin);

        for (int i = 0; book_title[i] != '\0'; i++) {
            if (book_title[i] == '\n') {
                book_title[i] = '\0';
                break;
            }
        }

        fprintf(file, "%s\n", book_title);  
        printf("Book title '%s' successfully stored!\n", book_title);

        printf("Do you want to enter another title? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    fclose(file);
    printf("\nAll entries saved in borrowed_books.txt\n");
    return 0;
    }