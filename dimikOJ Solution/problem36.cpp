// dimikoj problem 36
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<string> words;
        while (n--)
        {
            string word;
            cin >> word;
            words.insert(word);
        }
        for (auto it : words)
        {
            cout << it << endl;
        }
    }
}