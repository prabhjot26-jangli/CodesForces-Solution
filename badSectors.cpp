#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    const int INF = 1e9;
    vector<int> dist(n, INF);

    // distance to nearest '*' from the left
    int last = -INF;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
            last = i;
        dist[i] = i - last;
    }

    // distance to nearest '*' from the right
    last = INF;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '*')
            last = i;
        dist[i] = min(dist[i], last - i);
    }

    // build result
    for (int i = 0; i < n; i++)
    {
        if (dist[i] <= k)
            s[i] = '*';
        else
            s[i] = '.';
    }

    cout << s;
    return 0;
}
