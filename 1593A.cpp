#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long A = 0, B = 0, C = 0;

        if (a > b)
        {
            B = a - b + 1;
        }
        if (b > a)
        {
            A = b - a + 1;
        }
        if (c > a && c > b)
        {
            A = c - a + 1;
        }
        if (c > b)
        {
            B = c - b + 1;
        }
        if (a > c)
        {
            C = a - c + 1;
        }
        if (b > c)
        {
            C = b - c + 1;
        }
        else if (a == b & b == c)
        {
            A = B = C = 1;
        }
        cout << A << " " << B << " " << C << endl;
    }

    return 0;
}