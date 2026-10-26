#include <stdio.h>
int main(){
    double pi = 3.141592653589793;
    double a;
    scanf("%lf", &a);
    printf("%.3f", pi * 2 * a);
    printf("\n%.3f", pi * a * a);
    return 0;
}