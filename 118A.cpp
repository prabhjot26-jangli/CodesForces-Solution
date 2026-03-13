#include <bits/stdc++.h>
using namespace std;

void solve();
int main()
{
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
void solve()
{
    string s;
    cin >> s;
    string neew = "";
    for (char c : s)
    {
        c = toupper(c);
        if (c == 'A' ||
            c == 'E' ||
            c == 'I' ||
            c == 'O' ||
            c == 'U' ||
            c == 'Y')
        {
            continue;
        }
        else
        {
            neew += c;
        }
    }
    string fi = "";
    for (char c : neew)
    {
        c = tolower(c);
        fi += '.';
        fi += c;
    }
    cout << fi << endl;
}