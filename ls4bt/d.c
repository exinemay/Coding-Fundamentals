#include <stdio.h>

void  swap (int *a, int *b){
    if (*a < *b) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
}

void calculate(int a, int b, int *sum, int *diff, int *prod){
    swap(&a, &b);
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
}

int main(){
    int a, b, sum, diff, prod;
    scanf("%d %d", &a, &b);
    calculate(a, b, &sum, &diff, &prod);
    printf("%d %d %d", sum, diff, prod);
}