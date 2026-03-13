#include <stdio.h>

int main() {

    FILE *file;
    char title[100];

    // Open file in append mode so existing data is not deleted
    file = fopen("borrowed_books.txt", "a");

    if(file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    // Write title to file
    fprintf(file, "%s", title);

    // Close the file
    fclose(file);

    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}