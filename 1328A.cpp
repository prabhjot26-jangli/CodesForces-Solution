#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        long long r = a % b;
        long long count = (b - r) % b;

        cout << count << endl;
    }
    return 0;
}
