
// dimikoj problem 34
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        unsigned long long c;
        cin >> a >> b >> c;
        int minNum = min(a, b);
        int maxNum = max(a, b);
        unsigned long long count = 1;
        for (unsigned long long i = maxNum; i <= c; i)
        {
            if (i % minNum == 0)
            {
                cout << i;
                if (i != c)
                {
                    cout << endl;
                }
            }
            count++;
            i = maxNum * count;
        }
        if (t != 0)
        {
            cout << endl;
        }
    }
}