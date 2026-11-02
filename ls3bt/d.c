#include <stdio.h>

int main (){
    int hang, cot;
    scanf("%d %d", &hang, &cot);

    for(int h = 1; h <= hang; h++){

        for(int c = 1; c <= cot; c++){

            if (h == 1 || h == hang){
                printf("*");
            }

            else{
                if (c == 1 || c == cot){
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
        }
        
        printf("\n");
    }
}