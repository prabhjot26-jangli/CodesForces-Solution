#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int ways = 0;
    while (t--)
    {
        int k = 0;
        cin >> k;

        if (k <= 2)
        {
            cout << 0 << endl;
        }
        else
        {
            if (k % 2 == 0)
            {
                ways = (k / 2) - 1;
            }
            else
            {
                ways = k / 2;
            }
            cout << ways << endl;
        }
    }
    return 0;
}
