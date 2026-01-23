#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int arr0[n];

    int p;
    cin >> p;
    int arr1[p];
    for (int i = 0; i < p; i++)
    {
        cin >> arr1[i];
    }

    int q;
    cin >> q;
    int arr2[q];
    for (int i = 0; i < q; i++)
    {
        cin >> arr2[i];
    }

    ///////this is to checkkkkkkkkkkkkkkkkkkkkkkkkkkk
    // cout << "This is array 1: ";
    // for (int i = 0; i < p; i++)
    // {
    //     cout << arr1[i];
    // }
    // cout << endl;
    // cout << "This is array 2 :";
    // for (int i = 0; i < q; i++)
    // {
    //     cout << arr2[i];
    // }
    // cout << endl;
    // cout << "this is array 0 : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr0[i];
    // }
    // cout << endl;
    ///////////////////////////////////////////////////////////////////
    for (int i = 0; i < n; i++)
    {
        arr0[i] = i + 1;
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr0[j])
            {
                arr0[j] = 0;
            }
        }
    }

    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr2[i] == arr0[j])
            {
                arr0[j] = 0;
            }
        }
    }
    ///////////////////////////////////////////////////
    // cout << "this is array 0 after operation : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr0[i];
    // }
    // cout << endl;
    ///////////////////////////////////////////

    for (int i = 0; i < n; i++)
    {
        if (arr0[i] > 0)
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}