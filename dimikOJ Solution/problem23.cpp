
// dimikoj problem 23
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pre-computing
    map<char, int> data;

    int count = 1;
    for (char i = 'A'; i <= 'Z'; i++)
    {
        data[i] = count;
        count++;
    }
    for (auto pair : data)
    {
        cout << pair.first << " " << pair.second;
    }
    // test case number
    int t;
    cin >> t;
    while (t--)
    {
        string sentence;
        cin >> sentence;
        for (char c : sentence)
        {
            auto it = data.find(c);
            if (it != data.end())
            {
                cout << it->second;
            }
        }
        cout;
    }
}
