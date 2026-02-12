#include <stdio.h>

int main(){
    int choice;

    printf("Mobile Data Bundle\n");
    printf("1. 100 MB - 50 KES\n");
    printf("2. 500 MB - 200 KES\n");
    printf("3. 1 GB   - 350 KES\n");
    printf("4. 2 GB   - 600 KES\n");

     printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected: 100 MB bundle.\nCost: 50 KES\n");
            break;

        case 2:
            printf("You selected: 500 MB bundle.\nCost: 200 KES\n");
            break;

        case 3:
            printf("You selected: 1 GB bundle.\nCost: 350 KES\n");
            break;

        case 4:
            printf("You selected: 2 GB bundle.\nCost: 600 KES\n");
            break;
            
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}