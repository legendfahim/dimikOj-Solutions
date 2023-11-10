
// dimikoj problem 48--unsolved
// The code  is good but there has TLE problem
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> data;
        int n;
        cin >> n;
        int input;
        // input data 1 to n-1 from user
        for (int i = 0; i < n - 1; i++)
        {
            cin >> input;
            data.push_back(input);
        }
        // sort data of the vector
        sort(data.begin(), data.end());
        // search number and print the unfound number
        for (int i = 1; i <= n; i++)
        {
            auto it = find(data.begin(), data.end(), i);
            if (it == data.end())
            {
                cout << i;
                break;
            }
        }

        cout << endl;
    }
}

// dimikoj problem 48
// The code  is good but there has TLE problem
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool result = false;
        int arrSize;
        cin >> arrSize;
        int data[arrSize - 2];
        for (int i = 0; i <= arrSize - 2; i++)
        {
            cin >> data[i];
        }
        for (int j = 1; j <= arrSize; j++)
        {
            for (int k = 0; k <= arrSize; k++)
            {
                if (data[k] == j)
                {
                    break;
                }

                if (k == arrSize && data[k] != j)
                {
                    result = true;
                    cout << j << endl;
                    break;
                }
                if (data[k] != j)
                {
                    continue;
                }
            }
            if (result)
            {
                break;
            }
        }
    }
}