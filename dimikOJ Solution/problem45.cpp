
// dimikoj problem 45--unsolved
#include <bits/stdc++.h>
using namespace std;
long long int fact(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    return num * fact(num - 1);
}
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (long long int l = 0; l <= n; l++)
        {
            if (l == 0)
            {
                cout << 1 << endl;
                continue;
            }
            for (long long int e = 0; e <= l; e++)
            {
                if (e == 0)
                {
                    cout << 1 << " ";
                    continue;
                }
                else if (e == l)
                {
                    cout << 1;
                    continue;
                }

                long long int cal = fact(l) / (fact(e) * fact(l - e));
                cout << cal << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}