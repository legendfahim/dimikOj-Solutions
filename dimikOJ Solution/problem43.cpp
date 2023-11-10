
// dimikoj problem 43--unsolved
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, q, c;
        cin >> p >> q >> c;
        int power = pow(p, q);
        double cal = power % c;
        cout << "Result = " << cal << endl;
    }
}