#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int long long n;
        cin >> n;
        int long long coin2, coin1 = 0;
        if (n == 1)
        {
            coin1 = 1;
            coin2 = 0;
        }
        else if (n == 2)
        {
            coin2 = 1;
            coin1 = 0;
        }

        else if (n % 3 == 0)
        {
            coin1 = coin2 = n / 3;
        }
        else if (n % 3 != 0)
        {
            if (n % 3 == 1)
            {
                coin2 = (n / 3);
                coin1 = coin2 + 1;
            }
            else if (n % 3 == 2)
            {
                coin1 = (n / 3);
                coin2 = coin1 + 1;
            }
        }
        cout << coin1 << " " << coin2 << endl;
    }
    return 0;
}