#include <stdio.h>
#include <math.h>

#define N 13

double tan_values[N];

double degrees_to_radians(double degrees) {
    return degrees * M_PI / 180.0;
}

double trapezoidal_rule(double a, double b) {
    double h = (b - a) / (N - 1);
    double sum = 0.5 * (tan_values[0] + tan_values[N - 1]);

    for (int i = 1; i < N - 1; i++) {
        sum += tan_values[i];
    }

    return h * sum;
}

int main() {

    for (int i = 0; i < N; i++) {
        double degrees = 5 * i;  
        double radians = degrees_to_radians(degrees); 
        tan_values[i] = tan(radians);
    }

    printf("tan(x) values for every 5 degrees (in radians):\n");
    for (int i = 0; i < N; i++) {
        printf("tan(%d degrees) = %f\n", 5 * i, tan_values[i]);
    }

    double area = trapezoidal_rule(0, degrees_to_radians(60));
    printf("Area under the curve of tan(x) from 0 to 60 degrees: %f\n", area);

    return 0;
}