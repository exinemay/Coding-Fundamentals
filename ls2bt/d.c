#include <stdio.h>
#include <ctype.h>

int main (){
    char a;
    scanf("%c", &a);
    
    if ( a >= 'a' && a <= 'z'){
        a = toupper(a);
    }
        printf("%c", a);
    return 0;
}