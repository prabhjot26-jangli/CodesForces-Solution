#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s[0] != '1')
    {
        cout << "NO";
        return 0;
    }

    int consecutive4 = 0;

    for (char c : s)
    {
        if (c != '1' && c != '4')
        {
            cout << "NO";
            return 0;
        }

        if (c == '4')
        {
            consecutive4++;
            if (consecutive4 > 2)
            {
                cout << "NO";
                return 0;
            }
        }
        else
        {
            consecutive4 = 0;
        }
    }

    cout << "YES";
    return 0;
}