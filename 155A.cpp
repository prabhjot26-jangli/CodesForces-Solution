#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int performance = arr[0];
    // sort(arr, arr + n);

    int more, less = performance;
    int amazing = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > more)
        {
            more = arr[i];
            amazing += 1;
        }
        else if (arr[i] < less)
        {
            less = arr[i];
            amazing++;
        }
    }
    cout << amazing << endl;

    return 0;
}