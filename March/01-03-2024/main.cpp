#include <iostream>
#include <vector>

using namespace std;

int main() {
    int number;
    vector <int> answer;
    cout << "Enter number : ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        if (i <= 2) {
            answer.push_back(1);
            continue;
        }
        answer.push_back(answer[answer.size() - 2] + answer[answer.size() - 1]);
    }

    for (int i = 0; i < answer.size(); i++) {
        cout << i + 1 << ")\t" <<answer[i] << endl;
    }


    return 0;
}