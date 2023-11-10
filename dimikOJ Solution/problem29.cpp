// dimikoj problem 29---unsolved
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;

        if (c >= 'a' && c >= 'z')
        {
            cout << "Lowercase Character";
        }
        else if (c >= 'A' && c <= 'Z')
        {
            cout << "Uppercase Character";
        }
        else if (c >= 0 && c <= 9)
        {
            cout << "Numerical Digit";
        }
        else
        {
            cout << "Special Character";
        }
        if (t != 0)
        {
            cout << endl;
        }
    }
    return 0;
}