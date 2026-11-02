#include <stdio.h>
int main() {
    int i,j;

    for (i = 1; i <= 4; i++) {

        for (j = 1; j <= 4; j++) {
            if (j==3) {
                continue;
            }
            printf("%d\t",(i*j));
        }

        printf("\n");
    }

    return 0;
}