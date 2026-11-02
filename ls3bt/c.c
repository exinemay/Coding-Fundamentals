#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int n, k;

    for (int a = 1; a <= t; a++ ){
        scanf("%d %d", &n, &k);
        printf("%d\n", n / k);
    }

}