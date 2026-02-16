#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int arr[3] = {a, b, c};
        sort(arr, arr + 3);
        bool flag = true;

        if (arr[0] != arr[2])
        {
            int diff1 = arr[2] - arr[0];
            if (n >= diff1)
            {
                n = n - diff1;
            }
            else
            {
                flag = false;
            }
        }
        if (arr[1] != arr[2] && flag)
        {
            int diff2 = arr[2] - arr[1];
            if (n >= diff2)
            {
                n = n - diff2;
            }
            else
            {
                flag = false;
            }
        }

        if (flag && n % 3 == 0)
        {

            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}