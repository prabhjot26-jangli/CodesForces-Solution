#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int long long k = 0;
        cin >> k;
        int long long pieces = 0;
        int long long number = 0;
        number = k + 2;
        int long long one, two;
        if (number % 2 != 0)
        {
            one = number / 2;
            two = one + 1;
        }
        else if (number % 2 == 0)
        {
            one = number / 2;
            two = one;
        }
        pieces = one * two;
        cout << pieces << endl;
    }
    return 0;
}