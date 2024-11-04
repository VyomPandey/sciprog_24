#include <stdio.h>

void matmult(double A[5][3], double B[3][4], double C[5][4]);

int main() {
    double A[5][3];
    double B[3][4];
    double C[5][4];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            A[i][j] = i + j;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            B[i][j] = i - j;
        }
    }

    matmult(A, B, C);

    printf("Matrix A:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%6.2f ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%6.2f ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix C (A * B):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%6.2f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
