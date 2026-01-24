#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int largest = arr[n - 1];
    // cout << largest << " lagest element" << endl;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < largest)
        {
            sum = sum + (largest - arr[i]);
        }
    }
    cout << sum << endl;

    return 0;
}