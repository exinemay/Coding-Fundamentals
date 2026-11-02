#include <stdio.h>
int main(){
    double pi = 3.141592653589793;
    double a;
    scanf("%lf", &a);
    printf("%.3lf", pi * 2 * a);
    printf("\n%.3lf", pi * a * a);
    return 0;
}