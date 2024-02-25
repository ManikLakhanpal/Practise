#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main() {

    string x;
    cout << "Enter number : ";
    cin >> x;

    int num_size = x.size();

    vector <char> num_array;

    for (int i = 0; i < num_size; i++) {
        num_array.push_back(x[i]);
    }

    for (int i = num_size -1 ; i >= 0; i--) {
        cout << num_array[i];
    }
    cout << endl;
    return 0;
}