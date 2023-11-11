
// dimikoj problem 28

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        bool result = true;
        int n;
        cin >> n;
        int numbers[n];

        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        if (n == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            // Check if the array is non-decreasing
            if (numbers[0] <= numbers[1])
            {
                for (int i = 1; i < n - 1; i++)
                {
                    if (numbers[i] > numbers[i + 1])
                    {
                        result = false;
                        break;
                    }
                }
            }
            // Check if the array is non-increasing
            else
            {
                for (int i = 1; i < n - 1; i++)
                {
                    if (numbers[i] < numbers[i + 1])
                    {
                        result = false;
                        break;
                    }
                }
            }

            if (result)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
