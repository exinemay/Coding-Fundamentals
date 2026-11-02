#include <stdio.h>

int main() {
    int time;
    scanf("%d", &time);

    if (time < 10) {
        printf("Good morning");
    }
    else if (time < 20) {
        printf("Good day");
    }
    else {
        printf("Good evening");
    }
}