#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if (a <= 0 || a > 12){
        printf("1 nam chi co 12 thang.", a);
    }    
    else if (a == 4 || a == 6 || a == 9 || a == 11){
        printf("thang %d co 30 ngay.", a);
    }
    else if (a == 2){
        printf("thang %d co 28 ngay.", a);
    }
    else{
        printf("thang %d co 31 ngay.", a);
    }

    return 0;
}