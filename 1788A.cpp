#include <iostream>
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
        int totalTwos = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 2)
                totalTwos++;
        }
        if (totalTwos % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }

        int prefixTwos = 0;
        int target = totalTwos / 2;
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == 2)
                prefixTwos++;

            if (prefixTwos == target)
            {
                cout << i + 1 << endl;
                flag = false;
                break;
            }
        }
        if (totalTwos == 0 && flag)
            cout << 1 << endl;
    }

    return 0;
}
