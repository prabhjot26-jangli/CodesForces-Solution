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
    int l = s.length();
    vector<int> binary;
    int num = 0;
    int max = 0;
    for (char c : s)
    {
        binary.push_back(c);
    }
    for (int i = 0; i < l - 1; i++)
    {
        if (binary[i] == binary[i + 1])
        {
            num++;

            if (num > max)
            {
                max = num;
            }
        }
        else
        {
            num = 0;
        }
    }
    if (max >= 6)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}