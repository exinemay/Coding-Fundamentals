#include <stdio.h>

int uoc(int a){
    int cnt = 0;
    for (int i = 1; i <= a; i++){
        if (a % i == 0) cnt ++;
    }
    return cnt;
}

int cnt(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        sum += uoc(i)*uoc(n-i);
    }
    return sum;
}

int main (){
    int a;
    scanf("%d", &a);

    printf("%d", cnt(a));
}