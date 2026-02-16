#include <iostream>
#include <cmath>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        long a, b;
        cin >> a >> b;
        int steps = 0;
        if (a == b)
        {
        }
        else if (abs(b - a) > 10)
        {
            long difference = abs(b - a);
            if (difference > 10)
            {
                if (difference % 10 == 0)
                {
                    steps = difference / 10;
                }
                else
                {
                    steps = difference / 10;
                    steps++;
                }
            }
        }
        else
        {
            steps++;
        }
        cout << steps << endl;
    }
}

int main()
{
    solve();
    return 0;
}