
// dimikoj problem 46
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        double a, b, c, s;
        cin >> a >> b >> c;

        s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << "Area = " << fixed << setprecision(3) << area << endl;
    }
}