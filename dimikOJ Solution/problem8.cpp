
// dimikoj problem 8
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n1, n2, n3, minNum, midNum, maxNum;

        cin >> n1 >> n2 >> n3;
        // find min number
        int mi1 = min(n1, n2);
        int mi2 = min(n2, n3);
        minNum = min(mi1, mi2);
        // find max number
        int ma1 = max(n1, n2);
        int ma2 = max(n2, n3);
        maxNum = max(ma1, ma2);
        // find mid number
        if (n1 > minNum && n1 < maxNum)
        {
            midNum = n1;
        }
        else if (n2 > minNum && n2 < maxNum)
        {
            midNum = n2;
        }
        else
        {
            midNum = n3;
        }

        cout << "Case "
             << i + 1
             << ": "
             << minNum
             << " "
             << midNum
             << " "
             << maxNum;
    }
}