//Diamond Star Pattern

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i = n-1; i > 0; i--){
        for(j =n-i; j > 0; j--){
            printf(" ");
        }
for(j = 2*i-1; j > 0; j--){
    printf("*");
}

        printf("\n");

    }

    return 0;
}
