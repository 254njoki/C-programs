/*
Name: Fidelis Njoki 
Reg: CT100/G/26151
Des: Room occupancy 
*/

#include <stdio.h>

int main() {
    int occupancy[5][10];
    int i, j;
    
    // Generate random occupancy data (0 or 1)
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;  // 0 or 1
        }
    }

    // Display occupancy data
    printf("Room Occupancy (1 = Occupied, 0 = Vacant):\n");
    for (i = 0; i < 5; i++) {
        printf("Floor %d: ", i + 1);
        for (j = 0; j < 10; j++) {
            printf("%d ", occupancy[i][j]);
        }
        printf("\n");
    }

    printf("\nRoom Summary per Floor:\n");
    
    // Count occupied and vacant rooms per floor
    for (i = 0; i < 5; i++) {
        int occupied = 0, vacant = 0;
        for (j = 0; j < 10; j++) {
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d : Occupied= %d, Vacant= %d\n", i + 1, occupied, vacant);
    }

    return 0;
}


