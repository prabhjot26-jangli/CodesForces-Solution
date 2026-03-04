#include <iostream>
using namespace std;

void solve();
void pattern();
void again();

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
void solve()
{
    int n = 1;
    cin >> n;

    if (n <= 3)
    {
        cout << n << endl;
        return;
    }
    else
    {
        if (n % 2 == 0)
        {
            cout << 0 << endl;
            return;
        }
        else
        {
            cout << 1 << endl;
            return;
        }
    }
}