#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int s = 0;
    int d = 0;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int left = 0;
    int right = n - 1;
    int value = 0;
    int turn = 0;

    while (left <= right)
    {
        if (arr[left] > arr[right])
        {
            value = arr[left];
            left++;
        }
        else
        {
            value = arr[right];
            right--;
        }
        if (turn % 2 == 0)
        {
            s += value;
            turn++;
        }
        else
        {
            d += value;
            turn++;
        }
    }

    cout << s << " " << d << endl;
    return 0;
}
