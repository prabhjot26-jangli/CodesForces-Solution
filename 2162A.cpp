#include <bits/stdc++.h>
using namespace std;

void solve();
void entry();

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        // solve();
        // entry();
        int n = 1;
        cin >> n;
        vector<int> V;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            V.push_back(temp);
        }
        sort(V.begin(), V.end());
        cout << V[n - 1] << endl;
    }
    return 0;
}
// void solve()
// {
//     int n = 1;
//     cin >> n;
//     vector<int> V(n);
//     for (int i = 0; i < n; i++)
//     {
//         // cin >> V[i];
//         int temp;
//         cin >> temp;
//         V.push_back(temp);
//     }
//     sort(V.begin(), V.end());
//     cout << V[2 * n - 1] << endl;
//     // cout << *max_element(V.begin(), V.end()) << endl;
// }
void entry()
{
    int n = 1;
    cin >> n;
    int max = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > max)
        {
            max = temp;
        }
    }
    cout << max << endl;
}