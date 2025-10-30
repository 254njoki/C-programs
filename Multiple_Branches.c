/*
Name: Fidelis 
Reg: CT100/G/26151/25
Des: Multiple_branches
*/

#include <stdio.h>

int main() {
    int chain[3][5][10]; 
    int branch, floor, room;
    int totalOccupied = 0;
    
    // Assign random occupancy to each room
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; 
                totalOccupied += chain[branch][floor][room];
            }
        }
    }

    // Display number of occupied rooms
    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);

    // Display occupancy per branch
    for (branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                branchOccupied += chain[branch][floor][room];
            }
        }
        printf("Branch %d has %d occupied rooms.\n", branch + 1, branchOccupied);
    }

    return 0;
}
