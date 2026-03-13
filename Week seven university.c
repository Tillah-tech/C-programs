#include <stdio.h>

struct Student {
    char name[50];
    int regNumber;
    float marks;
};

int main() {

    FILE *file;
    struct Student s;

    int n, i;

    // Open file for writing
    file = fopen("results.dat", "wb");

    if(file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student records
    for(i = 0; i < n; i++) {

        printf("\nEnter student name: ");
        scanf("%s", s.name);

        printf("Enter registration number: ");
        scanf("%d", &s.regNumber);

        printf("Enter marks: ");
        scanf("%f", &s.marks);

        fwrite(&s, sizeof(s), 1, file);
    }

    fclose(file);

    // Open file for reading
    file = fopen("results.dat", "rb");

    printf("\nStudent Results:\n");

    while(fread(&s, sizeof(s), 1, file) == 1) {

        printf("Name: %s\n", s.name);
        printf("Marks: %.2f\n\n", s.marks);
    }

    fclose(file);

    return 0;
}