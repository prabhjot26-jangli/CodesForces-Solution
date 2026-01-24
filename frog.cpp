#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    while (t--)
    {
        int n;
        long long x;
        cin >> n >> x;

        long long base_reach = 0;
        long long max_cycle_gain = -2e18; // this is power

        for (int i = 0; i < n; ++i)
        {
            long long a, b, c;
            cin >> a >> b >> c;

            base_reach += a * (b - 1);

            // alculate gain per rollback cycle
            long long cycle_gain = (a * b) - c;
            if (cycle_gain > max_cycle_gain)
            {
                max_cycle_gain = cycle_gain;
            }
        }

        if (base_reach >= x)
        {
            cout << 0 << "\n";
        }
        else if (max_cycle_gain <= 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            long long gap = x - base_reach;

            long long rollbacks = (gap + max_cycle_gain - 1) / max_cycle_gain;
            cout << rollbacks << "\n";
        }
    }
    return 0;
}