#include <stdio.h>
 
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int count = 0;
 
    for(int num = a; num <= b; num++){
        int check = 1;
        if (num == 1){
            continue;
        }
        //Hàm tìm số nguyên tố
        for(int test = 2; test * test <= num; test++){
            if(num % test == 0){
                check = 0;
                break;
            }
        }
        if (check){
            ++ count;
            printf("%d ", num);
        }
    }

    if (count == 0){
        printf("Khong co");
    }
    printf("\n%d", count);
}