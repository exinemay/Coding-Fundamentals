

    #include <stdio.h>
    int main(){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
        printf("%d\n", a - b);
        printf("%lld\n", (long long)a * b);
        printf("%.2lf\n", (double)a / b);
        printf("%d\n", a % b);
        return 0;
    }