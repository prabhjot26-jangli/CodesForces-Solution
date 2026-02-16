#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int k = 1; (long long)a[i] * k < n; k++)
            {
                int j = i + a[i] * k;
                if (j < n && a[j] == k)
                    ans++;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
