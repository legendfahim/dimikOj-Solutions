
// dimikoj problem 18
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string sentence = "";
        string value;
        string vowels = "";
        string consonants = "";
        string consonant;
        getline(cin, value);
        // clear spaces
        for (int k = 0; k < value.size(); k++)
        {
            if (value[k] != ' ')
            {
                sentence += value[k];
            }
        }
        // extract vowels and consonants
        for (int i = 0; i < sentence.size(); i++)
        {
            if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u')
            {
                vowels += sentence[i];
            }
            else
            {
                consonants += sentence[i];
            }
        }

        // print vowels and consonants
        cout << vowels
             << consonants;
    }
}