#include <stdio.h>

int main(){
    int n;
    int m = 0;
    scanf("%d",&n);
    int N = n;

    while (n > 0){
        m = m * 10 + n % 10;
        n = n / 10;
    }
    
    if (m == N){
        printf("Yes");
    } 
    else {
        printf("No");
    }

    return 0;
}