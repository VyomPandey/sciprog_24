#include <stdio.h>
#include <stdlib.h>

double factorial(int n) {
    if (n == 0 || n == 1) return 1;
    double fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int order;
    double true_e = 2.71828;

    printf("Enter the maximum order of the polynomial: ");
    scanf("%d", &order);

    double *terms = (double *)malloc((order + 1) * sizeof(double));
    if (terms == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("\nOrder\tEstimate of e\tDifference\n");
    for (int n = 1; n <= order; n++) {
        double sum = 0.0;
        for (int i = 0; i <= n; i++) {
            terms[i] = 1.0 / factorial(i);
            sum += terms[i];
        }
        printf("%d\t%.11f\t%.11f\n", n, sum, true_e - sum);
    }

    free(terms);
    return 0;
}
