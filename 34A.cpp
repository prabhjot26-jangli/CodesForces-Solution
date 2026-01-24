#include <iostream>
#include <limits>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    long long int least = 1e9;
    int index1 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (abs(arr[i] - arr[i + 1]) < least)
        {
            least = abs(arr[i] - arr[i + 1]);
            index1 = i;
        }
    }

    if (abs(arr[0] - arr[n - 1]) < least)
    {
        cout << n << " " << 1 << endl;
        return 0;
    }
    cout << index1 + 1 << " " << index1 + 2 << endl;

    return 0;
}