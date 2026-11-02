#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if (a <= 10){
        printf("Khong co");
    }
    else{
        for(int b = 11; b <= a; b++){   
            int m = 0;
            int N = b;
            int n = b;
            while (n > 0){
                m = m * 10 + n % 10;
                n = n / 10;
            }
            
            if (m == N){
                printf("%d ", m);
            }
        }
    }
    return 0;
}