// dimikoj problem 51
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string sentence, word, test = "";
        cin >> sentence >> word;

        for (int i = 0; i < sentence.length(); i++)
        {
            for (int j = i; j < i + word.length(); j++)
            {
                test += sentence[j];
            }
            if (test == word)
            {
                cout << i << endl;
                break;
            }
            else
            {

                test = "";
            }
        }
    }
}