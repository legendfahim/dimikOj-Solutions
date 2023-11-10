
// dimikoj problem 33--unsolved TLE
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        unsigned long long int a, b, c;
        cin >> a >> b >> c;
        while (a <= b)
        {
            if (a % c == 0)
            {
                cout << a << endl;
                a += c;
                continue;
            }
            a++;
        }

        cout << endl;
    }
}