// dimikoj problem 3
#include <iostream>
using namespace std;

int number[999];
int j = 1000;

void print()
{
    int count = 0;
    for (j; j > j - 6; j--)
    {
        cout << j << '\t';
        if (j == 1)
        {
            return;
        }
        count++;
        if (count % 5 == 0)
        {
            cout << endl;
        }
    }
}

int main()
{
    print();

    return 0;
}