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
        {
            cin >> arr[i];
        }
        int zC = 3;
        int oC = 1;
        int tC = 2;
        int fC = 1;
        int thrC = 1;
        int steps = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                zC--;
            else if (arr[i] == 1)
                oC--;
            else if (arr[i] == 2)
                tC--;
            else if (arr[i] == 5)
                fC--;
            else if (arr[i] == 3)
                thrC--;

            steps++;
            if (zC <= 0 &&
                oC <= 0 &&
                tC <= 0 &&
                fC <= 0 &&
                thrC <= 0)
            {
                cout << steps << endl;
                flag = false;

                break;
            }
        }
        if (flag)
        {
            cout << 0 << endl;
        }
    }
    return 0;
}