#include <stdio.h>
int main() {
    int tuoi;
    scanf("%d", &tuoi);

    if (tuoi <= 18) {
        printf("ban la thieu nien");
    }
    else if (tuoi <=50){
        printf("ban la nguoi trung nien");
    }
    else {
        printf("ban la nguoi gia"); 
    }

}