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
        string s;
        cin >> s;
        // int arr[n];
        int count1 = 0;
        // int count0 = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     if (s[i] == 0)
        //     {
        //         count0++;
        //     }
        //     else
        //     {
        //         count1++;
        //     }
        // }
        string original = s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                s[i] = '1';
            }
            else if (s[i] == '1')
            {
                s[i] = '0';
            }
            for (int j = 0; j < n; j++)
            {
                if (s[j] == '1')
                {
                    count1++;
                }
            }
            s = original;
        }
        cout << count1 << endl;
    }
    return 0;
}