#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = s[i];
    }

    sort(arr, arr + n);
    int count = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == arr[i + 1])
    //     {
    //     }
    //     else if (arr[i] != arr[i + 1] && arr[i + 1] != arr[i + 2] && (i + 2) < n)
    //     {
    //         // we found the unique length starting index
    //         count = n - 2
    //          ;
    //         break;
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        if (i + 1 < n && arr[i] == arr[i + 1])
        {
        }
        else
        {
            count++;
        }
    }

    // for (int i = 0; i < n;)
    // {
    //     int freq = 1;
    //     while (i + freq < n && arr[i] == arr[i + freq])
    //     {
    //         freq++;
    //     }
    //     if (freq == 1)
    //     {
    //         count++;
    //     }
    //     i = i + freq; // this i am writing cause i need to make a jump of all repeated wofds
    // }
    // cout << "Count value = " << count << endl;
    if (count % 2 == 1)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}
