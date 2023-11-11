
// dimikoj problem 11
#include <bits/stdc++.h>
using namespace std;
unsigned long long factorial(int n)
{
    int cal = n * (n - 1);
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        cout << factorial(num) << endl;
    }
}