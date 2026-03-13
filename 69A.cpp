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
    int N = 1;
    cin >> N;
    int x = 0, y = 0, z = 0;
    while (N--)

    {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        x += X;
        y += Y;
        z += Z;
    }
    ((x == y) && (y == z) && (x == 0)) ? cout << "YES\n" : cout << "NO\n";
}