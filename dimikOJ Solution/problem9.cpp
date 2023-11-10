
// dimikoj problem9
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long int num;
        cin >> num;
        long long int sqrtNum = sqrt(num);
        if (sqrtNum * sqrtNum == num)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}