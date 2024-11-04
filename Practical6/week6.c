#include <stdio.h>

#define N 5
#define P 3
#define Q 4

void matmult(double A[N][P], double B[P][Q], double C[N][Q]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < Q; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < Q; j++) {
            for (int k = 0; k < P; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    double A[N][P];
    double B[P][Q];
    double C[N][Q];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            A[i][j] = i + j;
        }
    }

    for (int i = 0; i < P; i++) {
        for (int j = 0; j < Q; j++) {
            B[i][j] = i - j;
        }
    }

    matmult(A, B, C);

    printf("Matrix A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            printf("%6.2f ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < P; i++) {
        for (int j = 0; j < Q; j++) {
            printf("%6.2f ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix C (A * B):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < Q; j++) {
            printf("%6.2f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
