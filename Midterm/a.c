#include <stdio.h>

int giaithua(int k){
    int k_gt = 1;
    for(int i = 1; i <= k; i++){
        k_gt *= i; 
    }
    return k_gt;
}

int main(){
    int n, k;
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++){
        scanf("%d %d", &n, &k);
        if(n % giaithua(k) == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
    }
}
}