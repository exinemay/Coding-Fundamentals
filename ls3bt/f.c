#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(int b = 1; b <= a; b++){  
        int m = 0;
        int N;
        scanf("%d", &N);
        int n = N;

        while (n > 0){
            m = m * 10 + n % 10;
            n = n / 10;
        }

        printf("%d\n", N + m);
    }
    }