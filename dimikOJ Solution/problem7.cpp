
// dimikoj problem 7

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string line;
        getline(cin, line);

        int count = 1;
        for (char c : line)
        {
            if (c == ' ')
            {
                count++;
            }
        }

        cout << count;
    }

    return 0;
}