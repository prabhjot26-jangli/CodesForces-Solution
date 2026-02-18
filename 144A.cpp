#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int max_index = 0;
    int min_index = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[max_index])
            max_index = i;

        if (a[i] <= a[min_index])
            min_index = i;
    }

    int swaps = max_index + (n - 1 - min_index);

    if (max_index > min_index)
        swaps--;

    cout << swaps;
}
