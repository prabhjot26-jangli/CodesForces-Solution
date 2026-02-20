#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, n;
        cin >> x >> y >> n;
        // 7 5 12345
        // k = y; // 12
        // bool flag = true;
        // if (x >= n)
        // {
        //     flag = false;
        //     cout << y << endl;
        // }
        // while (k < n && flag)
        // {
        //     if (k + x > n)
        //     {
        //         break;
        //     }
        //     else
        //     {
        //         k = k + x;
        //     }
        // }
        // if (flag)
        // long long m = (n - y) % x;

        /*what we need is k % x = y
        so k least k = x+y
        now biggest possible k = m.x + y
        such that x.m +y <= n
        so   x.m <= n-y
        m <= n-y / x
        m has to be an integger so m = floor((n-y)/x)

        now  k = mx+y
        k = floor((n-y)/x).x + y
        this will convert to
        k = n - (n - y) % x*/
        long long k = n - (n - y) % x;

        cout << k << endl;
    }
    return 0;
}