#include<stdio.h>

int main() { 
    int matrixA[2][4];
    int total_sum = 0;
    int i, j;

    printf("Enter %d integer numbers for the 2x4 matrix:\n", 8);

    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 4; j++) {
            printf("Enter element for Row %d, Col %d: ", i, j);
            scanf("%d", &matrixA[i][j]);
            total_sum = total_sum + matrixA[i][j];
        }
    }

    printf("\n--- 2D ARRAY SUMMATION REPORT ---\n");
    printf("Recorded Matrix (2x4):\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matrixA[i][j]);
        }
        printf("\n");
    }
    
    printf("Total Sum: %d\n", total_sum);
    return 0;
}