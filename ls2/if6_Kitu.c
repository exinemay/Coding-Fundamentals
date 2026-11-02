#include <stdio.h>
#include <ctype.h>

int main(){
    char kitu;
    scanf("%c", &kitu);

    if (kitu >= 'A' && kitu <= 'Z'){
        kitu = tolower(kitu);
    }
    printf("%c", kitu);
}