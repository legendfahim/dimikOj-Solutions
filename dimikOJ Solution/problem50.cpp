
// dimikoj problem 50
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string input;
        cin >> input;
        for (int i = 1; i < input.length() - 1; i++)
        {
            if (input[i] == 'R')
            {
                input[i] = input[i + 1];
            }
            else if (input[i] == 'L')
            {
                input[i] = input[i - 1];
            }
        }
        cout << input << endl;
    }
}