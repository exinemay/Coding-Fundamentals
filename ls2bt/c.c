#include <stdio.h>

int main(){
    float a;
    scanf("%f", &a);

    if (a<50){
        printf("S");
    }
    else if (a<65){
        printf("M");
    }
    else if (a<80){ 
        printf("L");
    }
    else {
        printf("XL");
    }
    return 0;
}