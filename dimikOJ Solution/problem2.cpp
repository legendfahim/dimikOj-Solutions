// dimikoj problem 2
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Digits can be at most 100... so, use a string
        char str[120];
        cin >> str;
        int l = strlen(str);

        // If a number's last digit is even, then the number is even.
        if (str[l - 1] % 2 == 0) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }

    return 0;
}