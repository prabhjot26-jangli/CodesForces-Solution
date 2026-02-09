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

        long long x = min(a, b);
        long long y = max(a, b);

        long long side = max(y, 2 * x);
        cout << side * side << endl;
    }
    return 0;
}
