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
    int N = 0;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int EvenP = 0, oddP = 0;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] % 2 != 0)
            {
                EvenP++;
            }
        }
        else
        {
            if (arr[i] % 2 == 0)
            {
                oddP++;
            }
        }
    }
    if (EvenP != oddP)
    {
        cout << "-1\n";
    }
    else
    {
        cout << EvenP << endl;
    }
}