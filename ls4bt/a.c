#include <stdio.h>

int euclid(int a, int b) {
    if (b == 0) {
        return a;
    }
    return euclid(b, a % b);
}

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        printf("%d\n", euclid(a, b));
    }
    return 0;
}