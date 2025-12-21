#include<stdio.h>

void print_matrix(int row, int col, int matrix[row][col]) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int A[2][3];
    int B[2][3];
    int BT[3][2];
    int C[2][2];
    int i, j, k;

    printf("Enter elements for Matrix A (2x3):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter elements for Matrix B (2x3):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    printf("\nEntered Matrix BT (3x2):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            BT[i][j] = B[j][i];
        }
    }
    print_matrix(3, 2, BT);

    // Matrix Multiplication C = A * BT
    for (i = 0; i < 2; i++) {   
        for (j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * BT[k][j];
            }
        }
    }
    printf("\n--- MATRIX MULTIPLICATION REPORT ---\n");
    printf("\nMatrix A (2x3):\n");
    print_matrix(2, 3, A);

    printf("\nMatrix B (2x3):\n");
    print_matrix(2, 3, B);  

    printf("\nMatrix BT (3x2):\n");
    print_matrix(3, 2, BT);

    printf("\nResultant Matrix C (A x BT, 2x2):\n");
    print_matrix(2, 2, C);

    return 0;
}