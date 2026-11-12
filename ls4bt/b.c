#include <stdio.h>

int global_counter = 0;

void increase (int *a){
    int x;
    scanf("%d", &x);
    *a = *a + x;
}

int main(){
    increase(&global_counter);
    printf("%d", global_counter);
}