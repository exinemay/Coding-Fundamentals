#include <stdio.h>

int main(){
    int a, b;
    a = 1;
    int sum = 0;
    scanf("%d",&b);

    for(int c = a; c <= b; c++){
        int e = 0;
        for(int d = 2; d * d <= c; d++){
            if(c % d == 0){
                e++;
            }
        }
        if (e == 0 && c != 1){
            sum += c;
        }
    }
    printf("%d", sum);
}