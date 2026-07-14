#include <stdio.h>

void PrintStarts() {
    for (int i = 0; i < 10; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    // Please write your code here.
    for (int i = 0; i < 5; i++) {
        PrintStarts();
    }

    return 0;
}