#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    long long h, l;
    if (!(cin >> n >> h >> l))
        return;

    vector<int> a(n);
    int count_both = 0;
    int count_row_only = 0;
    int count_col_only = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        bool is_row = (a[i] <= h);
        bool is_col = (a[i] <= l);

        if (is_row && is_col)
        {
            count_both++;
        }
        else if (is_row)
        {
            count_row_only++;
        }
        else if (is_col)
        {
            count_col_only++;
        }
    }

    int total_pairs = 0;

    int direct_match = min(count_row_only, count_col_only);
    total_pairs += direct_match;

    count_row_only -= direct_match;
    count_col_only -= direct_match;

    int remaining_restricted = count_row_only + count_col_only;

    int save_restricted = min(remaining_restricted, count_both);
    total_pairs += save_restricted;

    count_both -= save_restricted;

    total_pairs += count_both / 2;

    cout << total_pairs << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}