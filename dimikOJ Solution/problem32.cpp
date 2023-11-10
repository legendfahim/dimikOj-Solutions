
// dimikoj problem 32
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input test case number
    int t;
    cin >> t;
    while (t--)
    {
        // input numbers
        int x, n;
        cin >> x >> n;
        // check point
        if (x < n)
        {
            for (int i = 1; i > 0; i++)
            {
                int cal = x * i;
                if (cal <= n)
                {
                    cout << cal << endl;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            cout << "Invalid !";
        }
        // get new line after complete the operation
        if (t != 0)
        {
            cout << endl;
        }
    }
}