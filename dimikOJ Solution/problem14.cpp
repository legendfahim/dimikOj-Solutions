// dimikoj problem 14
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
        char c;

        getline(cin, sentence);

        cin >> c;
        cin.ignore();

        int result = 0;
        for (int i = 0; i < sentence.length(); i++)
        {

            if (sentence[i] == c)
            {
                result++;
            }
        }
        if (result)
        {
            cout << "Occurrence of '" << c << "' in '" << sentence << "' = " << result << endl;
        }
        else
        {
            cout << "'" << c << "' is not present" << endl;
        }
    }
}
