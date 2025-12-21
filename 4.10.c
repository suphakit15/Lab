#include<stdio.h>

int main() {
    int data[3][3];
    int i, j;

    printf("Enter %d integer number for the 3x3 array:\n", 9);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element for Row %d, Col %d: ", i, j);
            scanf("%d", &data[i][j]);
        }
    }

    printf("\n--- TWO-DIMENSIONAL ARRAY REPORT ---\n");
    printf("Array Size: %d Row x %d Columns\n", 3, 3);
    printf("Content (Table Format):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", data[i][j]);
        }
        printf("\n");
    }
    return 0;
}