#include <stdio.h>

int min(int a, int b){
    if (a <= b){
        return a;
    }
    return b;
}

int max(int a, int b){
    if (a >= b){
        return a;
    }
    return b;
}

int gcd(int a, int b){
    for(int i = min(a, b); i >=1; i--){
        if (a % i == 0 && b % i == 0){
            return i;
        }
    }
        return max(a,b);    
}

int euclid(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

//a * b = gcd(a,b) * lcm(a,b)
long long lcm(int a, int b){
    return (long long)a / gcd(a, b) * b;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d ", euclid(a, b));
    printf("%ld", lcm(a, b));
}