#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int test = 0;
    cin >> test;

    while (test--)
    {
        int a;
        cin >> a;
        int arr[a];
        int flag = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        // for (int i = 0; i < a; i++)
        // {
        //     cout << arr[i];
        // }
        // cout << endl;
        for (int j = 0; j < a; j++)
        {
            if (arr[j] == 0)
            {
                flag = 1;
                arr[j] += 1;
            }

            break;
        }
        // for (int i = 0; i < a; i++)
        // {
        //     cout << arr[i];
        // }
        // cout << endl;

        sort(arr, arr + a);
        int least = 1;
        if (flag == 0)
        {
            arr[0] += 1;

        } // i will obvioisuly increase the first least number by one only zero was not found
        long long int product = 1;
        for (int k = 0; k < a; k++)
        {
            product = product * arr[k];
        }
        cout << product << endl;
    }
    return 0;
}