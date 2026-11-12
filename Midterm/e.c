#include <stdio.h>

int sum(int a){
    int s = 0;
    for (int aa = a; aa > 0; aa /= 10){
        s += aa % 10;
    }
    return s;
}

int main(){
    int test;
    scanf("%d", &test);

    for (int i = 1; i <= test; i++){
        int a;
        scanf("%d", &a); 

        while (a > 9){
            a = sum(a);
        }
    
        printf ("%d\n", a);
    }
}