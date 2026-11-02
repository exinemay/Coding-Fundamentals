#include <stdio.h>
#include <ctype.h>

int main (){
    char a;
    scanf("%c", &a);
    
    if ( (a >= 'A' && a <= 'Y')  || (a >= 'a' && a <= 'y')){
        printf("%c", a + 1);
    }
    else {
        printf("%c", a - 25);
    }
    return 0;
}