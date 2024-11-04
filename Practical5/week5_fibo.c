#include <stdio.h>

void fibonacci_step(int* Fn1, int* Fn2) {
    int temp = *Fn1;
    *Fn1 = *Fn1 + *Fn2;
    *Fn2 = temp;
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int Fn1 = 1;
    int Fn2 = 0;

    if (n <= 0) {
        printf("The value of n should be at least 1.\n");
        return 0;
    }

    printf("Fibonacci series up to %d:\n", n);
    if (n >= 1) {
        printf("%d ", Fn2); // Print 0 for n >= 1
    }
    if (n >= 2) {
        printf("%d ", Fn1); // Print 1 for n >= 2
    }

    for (int i = 3; i <= n; i++) {
        fibonacci_step(&Fn1, &Fn2);
        printf("%d ", Fn1);
    }

    printf("\n");
    return 0;
}