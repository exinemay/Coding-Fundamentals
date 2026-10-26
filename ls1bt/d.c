#include <stdio.h>
int main(){
    int s_only;
    scanf("%d", &s_only);
    int h = s_only / 3600;
    int m = (s_only % 3600) / 60;
    int s = s_only % 60;
    printf("%d %d %d", h, m, s);
    return 0;
}