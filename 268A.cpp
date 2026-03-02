#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    int change = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i][0] <<" "<< arr[i][1] << endl;
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][0] == arr[j][1])
            {
                change += 1;
            }
        }
    }
    cout << change << endl;

    return 0;
}