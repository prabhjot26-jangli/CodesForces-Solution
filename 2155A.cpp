#include <bits/stdc++.h>
using namespace std;
void solve();
void solve2();
int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        // solve();
        solve2();
    }
    return 0;
}
void solve()
{
    int N = 1;
    cin >> N;
    vector<int> winners, losers;
    int number = 1;
    int matches = 0;

    for (int i = 0; i < N; i++)
    {
        winners.push_back(number);
        number++;
    }
    int Wpairs = winners.size() / 2;
    int Lpairs = losers.size() / 2;
    while (Wpairs >= 1 || Lpairs >= 1)
    {
        if (Wpairs >= 1)
        {
            for (int i = 0; i < Wpairs; i++)
            {
                matches++;
                int temp = winners.back();
                winners.pop_back();
                losers.push_back(temp);
            }
        }
        if (Lpairs >= 1)
        {
            for (int i = 0; i < Lpairs; i++)
            {
                matches++;
                losers.pop_back();
            }
        }
        Wpairs = winners.size() / 2;
        Lpairs = losers.size() / 2;
    }
    cout << matches + 1 << endl;
}
void solve2()
{
    int N = 1;
    cin >> N;
    cout << 2 * N - 2 << endl;
}
