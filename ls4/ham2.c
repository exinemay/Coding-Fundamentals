#include <stdio.h>

int sum(int a, int b){
    int sum = 0;
    for (int i = a; i <= b; i++){
        sum = sum + i;
    }
    return sum;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", sum(a, b));

}