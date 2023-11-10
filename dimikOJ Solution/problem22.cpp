
// dimikoj problem 22

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b; // a==1 & b==10^5

        cin >> a >> b; // a=1 b=5

        int count = 0;

        for (int i = a; i <= b; i++)
        {

            if (isPrime(i))
            {
                count++;
            }
        }

        cout << count;
        cout;
    }
}