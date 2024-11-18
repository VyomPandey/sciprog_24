#include <stdio.h>

int main() 
{
    int a, b, c, d;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    c = a;
    d = b;
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("GCD (Iterative) of %d and %d is: %d\n", c, d, a);
    return 0;
}
