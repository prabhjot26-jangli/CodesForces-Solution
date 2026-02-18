#include <iostream>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    // long long tiles_length = (n + a - 1) / a;
    // long long tiles_width  = (m + a - 1) / a;

    // cout << tiles_length * tiles_width;
    long long x = n / a;
    if (n % a != 0)
        x++;

    long long y = m / a;
    if (m % a != 0)
    {
        y++;
    }
    cout << x * y << endl;
}
