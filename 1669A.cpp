#include <iostream>
using namespace std;
#include <unordered_map>

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool flag = true;
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
            if (freq[arr[i]] >= 3)
            {
                cout << arr[i] << endl;
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << -1 << endl;
        }
    }
}
int main()
{
    solve();
    return 0;
}