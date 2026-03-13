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
    bool flag = false;
    for (char c : s)
    {
        if (c == '4' || c == '7')
        {
            continue;
        }
        else
        {
            flag = true;
        }
    }
    if (!flag)
    {
        cout << "YES" << endl;
        return;
    }

    else if (flag)
    {

        int N = stoi(s);
        // cout << N << endl;
        vector<int> lucky = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

        for (int x : lucky)
        {
            if (N % x == 0)
            {
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
    }
}