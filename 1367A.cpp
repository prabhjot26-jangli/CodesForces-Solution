#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int l = s.length();
    string news = "";
    news += s[0];
    // int newl = l / 2;
    for (int i = 1; i < l - 1; i += 2)
    {
        news += s[i];
    }
    news += s[l - 1];
    cout << news << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}