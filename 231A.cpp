#include <iostream>
using namespace std;

int main()
{
    int test = 0;
    cin >> test;
    int sum = 0;

    while (test--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2)
        {
            sum++;
        }
    }
    cout << sum << endl;

    return 0;
}