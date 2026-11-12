#include <stdio.h>

int banh(int m, int n){
    int sum, hople;
    hople = 0;
    if (m == 0) return n;

    for(int i = 1; i <= n; i ++){
        sum = i*(i+1)/2;
        if (sum % m == 0){
            hople ++;
        }
    }
    return hople;
}

int cake(int m, int n){
    int sum, hople;
    hople = 0;
    if (m == 0) return n;

    for(int i = 1; i <= n; i ++){
        if (i % m == 0 || (i+1) % m == 0) hople ++;
    }
    return hople; 
}

int main(){
    int m, n;
    scanf ("%d %d", &m, &n);
    printf("%d", cake(m, n));
}