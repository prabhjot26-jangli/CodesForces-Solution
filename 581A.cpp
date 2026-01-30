#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int total_days = (n + k) / 2;

    if (n == k)
    {
        cout << n << " " << 0 << endl;
    }
    else if (n > k)
    {
        cout << k << " " << total_days - k << endl;
    }
    else if (n < k)
    {
        cout << n << " " << total_days - n << endl;
    }
    return 0;
}