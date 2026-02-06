#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long c5 = n / 5;
        long long c3 = n / 3 - n / 15;
        long long c2 = n / 2 - n / 6 - n / 10 + n / 30;
        long long c1 = n - (c5 + c3 + c2);

        long long cost = c5 * 5 + c3 * 3 + c2 * 2 + c1 * 1;

        cout << cost << endl;
    }

    return 0;
}
