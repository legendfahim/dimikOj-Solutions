
// dimikoj problem 6

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int number;
        cin >> number;

        int lastNum = number % 10;

        while (number >= 10)
        {
            number /= 10;
        }

        cout << "Sum = " << number + lastNum;
    }
}