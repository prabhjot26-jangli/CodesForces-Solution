#include <bits/stdc++.h>
using namespace std;

bool check_order(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool value = check_order(arr, n);
        if (n == 1)
        {
            cout << "YES" << endl;
        }

        else if (value)
        {
            cout << "YES" << endl;
        }
        else if (!value && k == 1)
        {
            cout << "NO" << endl;
        }
        else if (!value && k > 1)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}