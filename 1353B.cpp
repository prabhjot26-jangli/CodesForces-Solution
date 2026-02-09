#include <iostream>
#include <algorithm>
using namespace std;

int swap(int a[], int b[], int n, int sw)
{
    sort(a, a + n);
    sort(b, b + n, greater<int>());

    int maxswap = 0;

    for (int i = 0; i < n; i++)
    {

        if (a[i] < b[i] && maxswap < sw)
        {
            a[i] = b[i];
            maxswap += 1;
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr1[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        int ans = swap(arr1, arr2, n, k);
        cout << ans << endl;
    }
    return 0;
}