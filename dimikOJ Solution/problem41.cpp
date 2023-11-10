
// dimikoj problem 41

#include <bits/stdc++.h>
using namespace std;
long long int fact(long long int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    return num * fact(num - 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        double sum = 0;
        for (double i = 1; i <= n; i++)
        {
            sum += i / fact(i);
        }
        cout << fixed << setprecision(4) << sum;
        if (t != 0)
        {
            cout << endl;
        }
    }
}