#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    /* ------ PART 1: 1D ARRAY ------ */
    float revenue[7];
    float total = 0, average;
    int i, j, k;

    printf("WEEKLY REVENUE TRACKER\n");

    for(i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;

    printf("\nTotal Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n\n", average);


    /* ------------------- PART 2: 2D ARRAY ------------------- */
    int occupancy[5][10];
    int occupied, vacant;

    srand(time(0));   // random number seed

    printf("ROOM OCCUPANCY PER FLOOR\n");

    for(i = 0; i < 5; i++) {

        occupied = 0;
        vacant = 0;

        for(j = 0; j < 10; j++) {

            occupancy[i][j] = rand() % 2;  // random 0 or 1

            if(occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d, Vacant: %d\n", i + 1, occupied, vacant);
    }


    /* ------------------- PART 3: 3D ARRAY ------------------- */
    int chain[3][5][10];
    int totalOccupied = 0;

    printf("\nTOTAL OCCUPIED ROOMS IN ALL BRANCHES\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            for(k = 0; k < 10; k++) {

                chain[i][j][k] = rand() % 2;

                if(chain[i][j][k] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("Total Occupied Rooms Across All Branches: %d\n", totalOccupied);

    return 0;
}