
// dimikoj problem 40
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        int X, K;
        cin >> X >> K;
        for (int i = 0; i <= K; i++)
        {
            sum += pow(X, i);
        }
        cout << "Result = " << sum;
        if (t != 0)
        {
            cout << endl;
        }
    }
}