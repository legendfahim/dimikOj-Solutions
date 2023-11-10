
// dimikoj problem 35
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double Xc, Yc, X, Y, R;
        cin >> Xc >> Yc >> R >> X >> Y;
        double distance = sqrt(((X - Xc) * (X - Xc)) + ((Y - Yc) * (Y - Yc)));
        if (distance <= R)
        {
            cout << "The point is inside the circle" << endl;
        }
        else
        {
            cout << "The point is not inside the circle" << endl;
        }
    }
}