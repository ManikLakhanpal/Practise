#include <stdio.h>

int main() {
    int number;
    printf("Enter number : ");
    scanf("%d", &number);

    int answer[number];

    for (int i = 0; i < number; i++) {
        if(i <= 1) {
            answer[i] = 1;
            continue;
        }

        answer[i] = answer[i - 2] + answer[i - 1];
    }

    for (int i = 0; i < number; i++) {
        printf("%d)\t%d\n",i+1, answer[i]);
    }

    return 0;
}