#include <stdio.h>
#include <math.h>

int main(){
    
    int n=12;
    float a=0, b=60,b_rad;
    b_rad = (M_PI*60)/180;

    float sum = tan(a) + tan(b_rad);

    for(int i=5; i<60 ; i=i+5)
    {
        sum += 2 * tan(i * M_PI * 180);
    }
    printf("\nValue after loop: %f", sum);
    sum = ((b_rad-a)/(2*n))*sum;
    printf("\nFinal value of sum is %f", sum);
    printf("\nActual value is %f", log(2));

    float abs_diff= fabs(sum-log(2));
    float rel_diff= fabs(1- (sum/log(2)));
    return 0;

}