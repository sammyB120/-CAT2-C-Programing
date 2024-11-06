/*
Author:samuel mbuya
Reg No:CT102/G/23825/24
Date:06/11/2024
*/
#include <stdio.h>

int main() {
    // Define and initialize the 2D array 'scores'
    int scores[2][2] = {{65, 92}, {35, 70}};

    // Print the elements of the array using a nested for loop
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}

