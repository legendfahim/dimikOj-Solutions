
// dimikoj problem 12
#include <bits/stdc++.h>
using namespace std;
int countZero(int num)
{
    int sum = 0;
    int number = num;

    number = number / 5;
    sum += number;
    if (number == 0)
    {
        return sum;
    }

    return sum + countZero(number);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        cout << countZero(n);

        if (t != 0)
        {
            cout << endl;
        }
    }
}