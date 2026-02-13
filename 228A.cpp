#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    int unique = 0;
    for (int i = 0; i < 4; i++)
    {
        int temp = arr[0];

        if (arr[i] == arr[i + 1] && i + 1 < 4)
        {
            unique++;
        }
    }
    cout << unique << endl;
    return 0;
}