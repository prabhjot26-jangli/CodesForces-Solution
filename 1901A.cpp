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
    int N, X;
    cin >> N >> X;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int minfuel = (X - arr[N - 1]) * 2;
    if (N == 1)
    {
        if (arr[0] - 0 > minfuel)
        {
            minfuel = arr[N - 1] - 0;
        }
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            if (((i + 1) < N) && ((arr[i + 1] - arr[i]) > minfuel))
            {
                minfuel = arr[i + 1] - arr[i];
            }
        }
        if (arr[0] - 0 > minfuel)
        {
            minfuel = arr[0] - 0;
        }
    }
    cout << minfuel << "\n";
}