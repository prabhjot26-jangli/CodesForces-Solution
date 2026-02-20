#include <iostream>
#include <algorithm>
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
        int flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        if (n == 1)
        {
            flag = false;
            cout << 0 << endl;
        }
        else
        {
            // sort(arr, arr + n);
            map<int, int> freq;
            for (int i = 0; i < n; i++)
            {
                freq[arr[i]]++;
            }
            for (auto &p : freq)
            {
                count = count + p.second / 2;
            }
            cout << count << endl;
        }
    }
    return 0;
}