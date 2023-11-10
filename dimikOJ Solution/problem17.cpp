// dimikoj problem 17
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
            if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u')
            {
                count++;
            }
        }
        cout << "Number of vowels = " << count;
    }
}
