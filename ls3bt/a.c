#include <stdio.h>

int main(){
    int sum =0;
    int a;

    while (scanf("%d",&a) == 1){
        if (a < 0){
            break;
        }
        sum += a;
    }
    printf("%d",sum);
}