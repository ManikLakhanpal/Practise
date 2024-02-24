#include <iostream>

using namespace std;

int option, num1, num2, result;

void enter_nums() {
    cout << "Enter num1 : ";
    cin >> num1;

    cout << "Enter num2 : ";
    cin >> num2;
}

int main() {

    cout << "1 --> SUM\n2 --> SUB\n3 --> MUL\n4 --> DIV\n5 --> REM\n6 --> END" << endl;

    while (option != 6) {
        cout << "Enter option : ";
        cin >> option;

        if (option == 6) {
            cout << "Bye.\n";
            break;
        }

        switch(option) {
            case 1:
                enter_nums();
                result = num1 + num2;
                cout << num1 << " + " << num2 << " = " << result << endl;
                break;
            
            case 2:
                enter_nums();
                result = num1 - num2;
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;
            
            case 3:
                enter_nums();
                result = num1 * num2;
                cout << num1 << " * " << num2 << " = " << result << endl;
                break;
            
            case 4:
                enter_nums();
                cout << num1 << " / " << num2 << " = " << num1 / (float)num2 << endl;
                break;
            
            case 5:
                enter_nums();
                result = num1 % num2;
                cout << num1 << " % " << num2 << " = " << result << endl;
                break;
            
            default:
                cout << "Not a valid operation." << endl;
        }
    }
    return 0;
}