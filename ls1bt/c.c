#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Xin chao ban!\nBan da nhap hai so %d va %d.\nTong cua chung la %d va tich la %d.\nHen gap lai ban!", a, b,a + b, a * b);
    return 0;
}