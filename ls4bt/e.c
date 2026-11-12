#include <stdio.h>

long long gcd(long long a, long long b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

long long lcm(long long a, long long b){
    long long c = gcd(a, b);
    long long d = a * b / c;
    return d;
}

int main(){
    long long a, b;
    long long K;
    scanf ("%lld %lld %lld", &a, &b, &K);
    printf("%lld", K / lcm(a, b));
}