#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int t1 = 0, t2 = 0, t3 = 0;
    vector<int> i1, i2, i3;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            t1++;
            i1.push_back(i);
        }
        else if (arr[i] == 2)
        {
            t2++;
            i2.push_back(i);
        }
        else
        {

            t3++;
            i3.push_back(i);
        }
    }
    if (t1 > 0 && t2 > 0 && t3 > 0)
    {
        int arr2[3] = {t1, t2, t3};
        sort(arr2, arr2 + 3);
        int w = arr2[0];
        cout << w << endl;
        for (int k = 0; k < w; k++)
        {
            cout << i1[k] + 1 << " " << i2[k] + 1 << " " << i3[k] + 1 << endl;
        }
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}