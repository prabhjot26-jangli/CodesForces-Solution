#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int total_sum = 0;
        for (int i = 0; i < n; i++)
        {
            total_sum += arr[i];
        }
        int TS = total_sum;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            total_sum = TS;
            total_sum = total_sum - arr[i];
            if (arr[i] % 2 == 0 && total_sum % 2 == 0)
            {
                flag = false;
                cout << "YES" << endl;
                break;
            }
            else if (arr[i] % 2 != 0 && total_sum % 2 != 0)
            {
                flag = false;
                cout << "YES" << endl;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}