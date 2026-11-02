#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a >= 50 && a <= 100){
        printf("%d nam trong khoang tu 50 toi 100", a);
    }
    else{
        printf("%d khong nam trong khoang tu 50 toi 100", a);
    }

    return 0;
}