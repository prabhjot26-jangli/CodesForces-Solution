#include <bits/stdc++.h>
using namespace std;

void solve();
int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
void solve()
{
    int N;
    cin >> N;
    vector<int> a(N), b(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> b[i];
    }
    int it = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] > b[i])
        {
            it += a[i] - b[i];
        }
    }
    if (it == 0)
    {
        cout << 1 << endl;
    }
    else
        cout << it + 1 << endl;
}