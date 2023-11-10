
// dimikoj problem 47
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> numbers; // first + second array
        int input;
        int arr1;
        int arr2;
        cin >> arr1;
        // first array
        while (arr1--)
        {
            cin >> input;
            numbers.push_back(input);
        }
        // second array
        cin >> arr2;

        while (arr2--)
        {
            cin >> input;
            numbers.push_back(input);
        }
        sort(numbers.begin(), numbers.end());
        for (int n = 0; n < numbers.size(); n++)
        {
            cout << numbers[n];
            if (n != numbers.size() - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}