#include <stdio.h>

int sum(int num){
    int sumn = 0;

    for(int i = 1; i <= num / 2; i ++){
        if (num % i == 0) sumn += i;
    }

    return sumn;
}

int nitc(int num){
    if(sum(num) > num) return 1;
    else return 0;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int cnt = 0;

    for (int i = a; i <= b; i++){
        if (nitc(i) == 1) cnt++;
    }
    
    printf("%d", cnt);

}