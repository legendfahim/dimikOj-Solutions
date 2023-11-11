// dimikoj problem 26
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double num;
        int cnt = 0;
        cin >> num;

        while (num >= 1)
        {
            cnt++;
            num /= 2.0;
        }

        cout << cnt << " days" << endl;
    }

    return 0;
}