
// dimikoj problem 21
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string word;
        cin >> word;
        for (int i = word.size() - 1; i >= 0; i--)
        {
            cout << word[i];
        }
        cout;
    }
}