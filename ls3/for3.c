#include <stdio.h>
int main() {
    int i;

while (i !=10) {
    printf("Enter a number: ");
    scanf("%d", &i);
    if (i == 10) {
        printf("You found it!\n");
        break;
    } else {
        printf("Try again\n");
    }
}
    return 0;
}