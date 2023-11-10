// dimikoj problem 4
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        long int number;
        cin >> number;
        cout << "Case " << j + 1 << ": ";
        for (int i = 1; i <= number; i++)
        {
            if (number % i == 0)
            {
                cout << i;
                if (i != number)
                {
                    cout << " ";
                }
            }
        }
        cout;
    }
}