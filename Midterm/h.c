#include <stdio.h>

int bong(int a){
    int sang = 0;
    for (int i = 1; i <= a; i++){
        int trangthai = 0;
        for(int k = 1; k <= i/2; k++){
            if (i % k == 0){
                trangthai++;
            }
        }
        if (trangthai % 2 != 0) sang++;
    }
    return sang;
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%d", bong(a));
}