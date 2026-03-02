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
    if ((N / 2) % 2 != 0)
    {
        cout << "NO\n";
        return;
    }
    int arr[N];
    int two = 2;
    cout << "YES\n";
    int SUMEVEN = 0;
    for (int i = 0; i <= ((N / 2) - 1); i++)
    {
        arr[i] = two;
        SUMEVEN += two;
        two += 2;
    }
    int one = 1;
    int SUMODD = 0;
    for (int i = (N / 2); i < N; i++)
    {

        arr[i] = one;
        SUMODD += one;
        one += 2;
    }
    // for (auto i : arr)
    // {
    //     cout << i << " ";
    // }
    // cout << "\n";

    // cout << "even side " << SUMEVEN << " ODD side " << SUMODD << endl;
    while (SUMEVEN != SUMODD)
    {
        arr[N - 1] = arr[N - 1] + 2;
        SUMODD += 2;
    }
    // cout << "even side " << SUMEVEN << "ODD side " << SUMODD << endl;

    for (auto i : arr)
    {
        cout << i << " ";
    }
}