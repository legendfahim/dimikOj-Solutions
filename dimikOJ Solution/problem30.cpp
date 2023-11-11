// dimik problem 30--unsolved --TLE

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum;
        cin >> n;
        for (int i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }
        if (sum == n)
        {
            cout << "YES, " << n << " is a perfect number!" << endl;
            sum = 0;
        }
        else
        {
            cout << "NO, " << n << " is a perfect number!" << endl;
            sum = 0;
        }
    }
}