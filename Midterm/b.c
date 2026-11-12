#include <stdio.h>

int main(){
    int y;
    scanf("%d", &y);
    if (y >= ((y/100) * 101)){
        printf("%d", (y/100 + 1) * 101);
    }
    else{
        printf("%d", (y/100) * 101);
    }
}