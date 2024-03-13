#include <stdio.h>

int main() {
    int rows;
    printf("C\n");
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for (int i=1; i<=rows; i++) {

        for (int j=1; j<=i; j++) {
            printf("*");
        }

        for (int k=1; k<= ((rows - i) * 2); k++) {
            printf(" ");
        }

        for (int l=1; l<=i; l++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}