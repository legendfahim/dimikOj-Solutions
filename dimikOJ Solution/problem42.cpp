
// dimikoj problem 42
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        while (num >= 0)
        {
            if (num > 1)
            {
                cout << "2^" << num << " + ";
            }
            else if (num != 0)
            {
                cout << "2 + ";
            }
            else
            {
                cout << "1";
            }
            num--;
        }
        cout << endl;
    }

    return 0;
}