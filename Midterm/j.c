#include <stdio.h>

long long gcd(long long a, long long b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++){
        long long a, m;
        scanf("%lld %lld", &a, &m);
        long long x = 0;
        int cnt = 0;
        for(; x < m; x++ ){
            if (gcd(a, m) == gcd(a + x, m)){
                cnt++;
            }
        }
        printf("%d \n", cnt);
    } 
}