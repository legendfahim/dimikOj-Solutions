
// dimikoj problem 24
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i += 2)
        {
            cout << arr[i];
            if (i < n - 2)
            {
                cout << " ";
            }
        }

        cout;
    }
}