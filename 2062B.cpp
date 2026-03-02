#include <bits/stdc++.h>
using namespace std;
void solve();
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
void solve()
{
    int N;
    cin >> N;
    long long t;
    int flag = 1;
    for (int i = 0; i < N; i++)
    {
        cin >> t;
        if (t <= i * 2 || t <= ((N - i - 1) * 2))
        {
            flag = 0;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
    {
        cout << " NO " << endl;
    }
}