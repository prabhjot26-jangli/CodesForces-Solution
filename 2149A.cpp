#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int test = 0;
    cin >> test;
    while (test--)
    {
        int n = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int iterations = 0;
        int countMinusOne = 0, countZero = 0, countOne = 0;

        int product = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == -1)
            {
                countMinusOne += 1;
            }
            if (arr[i] == 1)
            {
                countOne += 1;
            }
            if (arr[i] == 0)
            {
                countZero += 1;
            }
        }
        // here i realised that it is given that we //can only perform +1 operation.and not //-1 oh goooddd
        if (countZero > 0)
        {
            iterations = countZero;
            if (countMinusOne % 2 != 0)
            {
                iterations += 2;
            }
        }
        else
        {
            if (countMinusOne % 2 == 0)
            {
                iterations = 0;
            }
            else
            {
                iterations = 2;
            }
        }

        // if (countMinusOne % 2 == 0 && countZero == 0)
        // {
        //     iterations = 0;
        // }
        // if (countMinusOne % 2 != 0 && countZero == 0)
        // {
        //     iterations = 1;
        // }
        // if (countMinusOne % 2 == 0 && countZero > 0)
        // {
        //     iterations = countZero;
        // }
        // if (countMinusOne % 2 != 0 && countZero > 0)
        // {
        //     iterations = countZero + 2;
        // }
        // if (countMinusOne == 0 && countZero > 0)
        // {
        //     iterations = countZero;
        // }
        // if (countMinusOne == 1 && countZero == 0)
        // {
        //     iterations = 2;
        // }
        // if (countMinusOne == 0 && countZero == 0)
        // {
        //     iterations = 0;
        // }

        cout << iterations << endl;
    }

    return 0;
}