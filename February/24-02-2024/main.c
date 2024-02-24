#include <stdio.h>

int main() {

    int option = 0, num1, num2, result;

    printf("1 --> SUM\n2 --> SUB\n3 --> MUL\n4 --> DIV\n5 --> REM\n6 --> END\n");

    while (option != 6) {

        printf("Enter option : ");
        scanf(" %d", &option);

        if (option == 6) {
            printf("Bye.\n");
            break;
        }

        printf("Enter num1 : ");
        scanf(" %d", &num1);
        printf("Enter num2 : ");
        scanf(" %d", &num2);

        switch(option) {
            case 1:
                result = num1 + num2;
                printf("%d + %d = %d\n", num1, num2, result);
                break;

            case 2:
                result = num1 - num2;
                printf("%d - %d = %d\n", num1, num2, result);
                break;

            case 3:
                result = num1 * num2;
                printf("%d * %d = %d\n", num1, num2, result);
                break;

            case 4:
                printf("%d / %d = %.2f\n", num1, num2, num1 / (float)num2);
                break;

            case 5:
                result = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, result);
                break;

            default:
                printf("Not a valid operation.");
        }   
    }
    return 0;
}