#include <stdio.h>

void  swapDRL (int *a, int *b){
    if (*a > *b) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    swapDRL(&a, &b);
    printf("%d %d", a, b);
}