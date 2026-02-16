#include <iostream>
#include <cmath>
using namespace std;

int least(long arr[], int n, int a)
{
    int smallest_element = INT_MAX;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(arr[i] - a) <= smallest_element)
        {
            smallest_element = abs(arr[i] - a);
            index = i;
        }
    }
    return index;
}
bool allSame(long arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[0])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long int a, b;
        cin >> n >> a;
        long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int value = least(arr, n, a);

        if (allSame(arr, n))
        {
            b = arr[n - 1] + 1; // thiss is like random value
            cout << b << endl;
        }
        //  now i will break the array into two groups

        else if (a == arr[value])
        {
            if (abs(arr[value] - arr[value + 1]) <= abs(arr[value] - arr[value - 1]))
            {
                b = arr[value - 1];
            }
            else
            {
                b = arr[value + 1];
            }
            cout << b << endl;
        }
        else if (abs(a - arr[value - 1]) == abs(a - arr[value]))
        {
            b = arr[value + 1];
            cout << b << endl;
        }
        else if (abs(a - arr[value] < abs(a - arr[value + 1])))
        {
            b = arr[value + 1];
            cout << b << endl;
        }
        // i only need to check i+1 cause the array oss sorted in asecding order
    }

    return 0;
}