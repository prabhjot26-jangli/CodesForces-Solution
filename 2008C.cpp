#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long l, r;
        cin >> l >> r;

        long long D = r - l;

        long long k = 1;

        while ((k * (k - 1)) / 2 <= D)
        {
            k++;
        }

        cout << k - 1 << endl;
    }

    return 0;
}
