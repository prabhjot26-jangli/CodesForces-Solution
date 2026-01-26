#include <iostream>
using namespace std;

int main()
{

    string s;
    cin >> s;

    int n = s.length();
    int digits[n];

    for (int i = 0; i < n; i++)
    {
        digits[i] = s[i] - '0';
    }
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (digits[i] == 7 || digits[i] == 4)
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
