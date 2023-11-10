
// dimikoj problem 19

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int count = 0;
        string sentence;
        getline(cin, sentence);
        for (int i = 0; i < sentence.size(); i++)
        {
            if (sentence[i] == ' ')

            {
                count++;
            }
        }
        if (count != 0)
        {

            cout << "Count = " << count + 1;
        }
        else
        {
            cout << "Count = " << count;
        }
    }
}