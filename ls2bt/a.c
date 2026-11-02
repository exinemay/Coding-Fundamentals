#include <stdio.h>

int main() {
    int a;
    if (scanf("%d", &a) == 1) {

        a += 30000 * (a < 200000);
        
        printf("%d\n", a);
    }
    return 0;
}