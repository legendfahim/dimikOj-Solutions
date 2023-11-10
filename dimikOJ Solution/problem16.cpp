
// dimikoj problem 16
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string sentence;
        getline(cin, sentence);

        string word = "";
        for (char c : sentence)
        {
            if (c == ' ')
            {

                for (int i = word.size() - 1; i >= 0; i--)
                {
                    cout << word[i];
                }
                cout << " ";
                word = "";
            }
            else
            {

                word += c;
            }
        }

        for (int i = word.size() - 1; i >= 0; i--)
        {
            cout << word[i];
        }

        cout;
    }

    return 0;
}