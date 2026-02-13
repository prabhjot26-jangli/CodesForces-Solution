#include <iostream>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);
        string NS = "";
        if (!s.empty())
            NS += s[0];

        int n = s.length();
        for (int i = 1; i < n; i++)
        {
            if (s[i] == ' ' && i + 1 < n)
            {
                NS += s[i + 1];
            }
        }
        cout << NS << endl;
    }
}

int main()
{
    solve();
    return 0;
}