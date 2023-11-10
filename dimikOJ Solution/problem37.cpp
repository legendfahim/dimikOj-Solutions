
// dimikoj problem 37
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int sum = 0;
        while (n > 0)
        {
            long long int lastDigit = n % 10;
            n /= 10;
            sum = sum * 10 + lastDigit;
        }
        cout << sum;
        if (t != 0)
        {
            cout << endl;
        }
    }
}