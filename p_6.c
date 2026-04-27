#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 7;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (abs(n / 2 - i) + abs(n / 2 - j) <= n / 2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
