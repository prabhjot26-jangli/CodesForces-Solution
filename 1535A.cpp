#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int f1, f2;
        f1 = max(a, b);
        f2 = max(c, d);
        int arr[4] = {a, b, c, d};
        sort(arr, arr + 4);
        if (arr[2] + arr[3] == f1 + f2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}