#include <stdio.h>

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd (b, a % b);
}

int lcm(int a, int b){
    return (a * b)/ gcd(a,b);
}

int cupdb(int a, int b, int c, int k){
    int cnt = 0;
    int i = 0;
    if (a == b || a == c || b == c) return -1;
    for (; cnt <= k ; i++) {
        if (i % a == 0 && i % lcm(a,b) !=0 && i % lcm (a,c) != 0 && i % lcm(b,c) != 0){
            cnt ++;
        }
        else if (i % b == 0 && i % lcm(a,b) !=0 && i % lcm (a,c) != 0 && i % lcm(b,c) != 0){
            cnt ++;
        }
        else if (i % c == 0 && i % lcm(a,b) !=0 && i % lcm (a,c) != 0 && i % lcm(b,c) != 0){
            cnt ++;
        }    

    }
    return i;
}

int main(){
    int q, a, b, c, k;
    scanf("%d", &q);

    for (int i = 1; i <= q; i++){
        scanf("%d %d %d %d", &a, &b, &c, &k);
        printf("%d \n", cupdb(a,b,c,k));
    }
}