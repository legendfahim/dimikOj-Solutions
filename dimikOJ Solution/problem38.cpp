
// dimikoj problem 38

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        // increment
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j <= i; j++)
            {
                cout << m;
                if (j != i)
                {
                    cout << " ";
                }
            }

            cout << endl;
        }
        // decrement
        for (int k = 0; k < n - 1; k++)
        {
            for (int i = n - 1; i > k; i--)
            {
                cout << m;
                if (i != k + 1)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}