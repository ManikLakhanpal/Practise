#include <stdio.h>
#include <string.h>

int main() {
    char x[100];
    printf("Enter number: ");
    scanf("%s", x);

    int num_size = strlen(x);

    char num_array[num_size];

    for (int i = 0; i < num_size; i++) {
        num_array[i] = x[i];
    }
    
    for (int i = num_size - 1; i >= 0; i--) {
        printf("%c", num_array[i]);
    }
    printf("\n");

    return 0;
}
