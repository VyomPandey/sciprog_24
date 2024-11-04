#include <stdio.h>
#include <math.h>

double artanh1(double x, double delta) {
    double term = x;
    double sum = term;
    int n = 1;

    while (fabs(term) >= delta) {
        term = pow(x, 2*n + 1) / (2*n + 1);
        sum += term;
        n++;
    }

    return sum;
}

double artanh2(double x) {
    return 0.5 * (log(1 + x) - log(1 - x));
}

int main() {
    double delta;
    
    printf("Enter a positive number for precision (delta): ");
    scanf("%lf", &delta);

    double x_start = -0.9;
    double x_end = 0.9;
    double step = 0.01;
    int n_points = (int)((x_end - x_start) / step) + 1;

    double results1[n_points];
    double results2[n_points];
    
    int i = 0;
    for (double x = x_start; x <= x_end; x += step) {
        results1[i] = artanh1(x, delta);
        results2[i] = artanh2(x);
        i++;
    }

    printf("Comparing results:\n");
    for (i = 0; i < n_points; i++) {
        double diff = fabs(results1[i] - results2[i]);
        printf("x = %.2f, artanh1 = %.10f, artanh2 = %.10f, Difference = %.10f\n", 
               x_start + i * step, results1[i], results2[i], diff);
    }

    return 0;
}
