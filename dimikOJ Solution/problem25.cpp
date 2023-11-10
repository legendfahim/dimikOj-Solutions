// dimikoj problem 25
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Test case number
    int t;
    cin >> t;
    while (t--)
    {
        long int a, b;
        // Input values
        cin >> a >> b;
        // find max number
        long int L = max(a, b); // 23 50 = 50
                                // find min number

        long int S = min(a, b); // 23 50 = 23
        // check point
        while (1)
        {
            long int R = L % S; // 50%23
            if (R == 0)
            {
                break;
            }
            else
            {
                L = S;
                S = R;
            }
        }
        // formula and print
        cout << "LCM = " << (a * b) / S;
        // check and give new line
        if (t != 0)
        {
            cout << endl;
        }
    }
}