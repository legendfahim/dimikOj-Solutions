
// dimikoj problem 39
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
        int size = word.size() - 1;
        int halfSize = word.size() / 2;
        bool ans = true;
        for (int i = 0; i < halfSize; i++)
        {
            if (word[i] != word[size])
            {
                ans = false;
                break;
            }
            size--;
        }
        if (ans)
        {
            cout << "Yes! It is palindrome!";
        }
        else
        {
            cout << "Sorry! It is not palindrome!";
        }
        if (t != 0)
        {
            cout << endl;
        }
    }
}