
// dimikoj problem 15
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    // input test case number
    cin >> t;

    while (t--)
    {
        string s;
        // input string
        cin >> s;

        // check if the input string is empty
        if (s.empty())
        {
            cout << endl;
            continue;
        }

        int data[55] = {0};
        // iterate all char of the string
        for (int i = 0; i < s.length(); i++)
        {
            // check if digit
            if (isdigit(s[i]))
            {
                data[s[i] - '0']++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                data[s[i] - 'A']++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                data[s[i] - 'a' + 26]++;
            }
        }

        // print data
        // iterate all char of the data
        for (int j = 0; j < 55; j++)
        {
            if (data[j] > 0)
            {
                if (j < 26)
                {
                    cout << char(j + 'A') << " = " << data[j] << endl;
                }
                else
                {
                    cout << char(j + 'a' - 26) << " = " << data[j] << endl;
                }
            }
        }

        if (t != 0)
        {
            cout << endl;
        }
    }

    return 0;
}

// // dimikoj problem 15
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int fs[255] = {0};

        if (s.empty())
        {
            cout << endl;
            continue;
        }

        // set value to the hash table
        for (int i = 0; i < s.length(); i++)
        {

            fs[(int)s[i]]++;
        }
        // print values from the hash table
        for (int i = 0; i < 255; i++)
        {
            if (fs[i] != 0)
            {

                cout << (char)i << " = " << fs[i] << endl;
            }
        }

        if (t != 0)
        {
            cout << endl;
        }
    }
}
*/