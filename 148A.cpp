#include <iostream>

using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    int arr[d];
    int element = 1;
    int count = 0;

    for (int i = 0; i < d; i++)
    {
        arr[i] = element;
        element += 1;
    }

    for (int i = 0; i < d; i++)
    {
        if (arr[i] % k == 0)
        {
            arr[i] = 0;
        }
        if (arr[i] % l == 0)
        {
            arr[i] = 0;
        }
        if (arr[i] % m == 0)
        {
            arr[i] = 0;
        }
        if (arr[i] % n == 0)
        {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < d; i++)
    {
        if (arr[i] % k == 0 || arr[i] % l == 0 || arr[i] % m == 0 || arr[i] % n == 0)
        {
            arr[i] = 0;
        }
    }

    for (int i = 0; i < d; i++)
    {
        if (arr[i] > 0)
        {
            count += 1;
        }
    }

    int escapredDragones = d - count;

    cout << escapredDragones << endl;

    return 0;
}