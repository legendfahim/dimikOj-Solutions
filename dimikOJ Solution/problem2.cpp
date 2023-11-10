// dimikoj problem 2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        if (x[x.length() - 1] % 2 == 0)
        {
            cout << "even";
        }
        else
        {
            cout << "odd";
        }
    }
}