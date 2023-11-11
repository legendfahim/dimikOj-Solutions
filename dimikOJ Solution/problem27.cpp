// dimikoj problem 27
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int copy, sum = 0;
        cin >> copy;
        int number = copy;
        for (int i = 0; i < 3; i++)
        {
            sum += pow(number % 10, 3);
            number = number / 10;
        }

        if (sum == copy)
        {
            cout << copy << " is an armstrong number!" << endl;
        }
        else
        {
            cout << copy << " is not an armstrong number!" << endl;
        }
    }
}