
// dimikoj problem 49--unsolved
// The code  is good but there has TLE problem
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool result = true;
        int n;
        cin >> n;
        if (n == 2 || n == 3)
        {
            cout << n << " is a prime" << endl;
            continue;
        }
        for (int i = 1; i <= n; i++)
        {
            if ((6 * i - 1) == n || (6 * i + 1) == n)
            {
                cout << n << " is a prime" << endl;
                result = false;
                break;
            }
        }
        if (result)
        {
            cout << n << " is not a prime" << endl;
        }
    }
}
// dimikoj problem 49--unsolved
// The code  is good but there has TLE problem
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> data = {2, 3};
    for (long long int i = 1; i < 10000000000; i++)
    {
        long long int cal = 6 * i - 1;
        data.push_back(cal);
    }

    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        auto it = find(data.begin(), data.end(), n);
        if (it != data.end())
        {
            cout << n << " is a prime" << endl;
        }
        else
        {
            cout << n << " is not a prime" << endl;
        }
    }
}