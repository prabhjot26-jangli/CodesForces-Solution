#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int steps = 0;
    int len = a.length();
    for (int i = 0; i < len; i++)
    {
        if (a[i] != b[i])
        {
            if (abs(a[i] - b[i]) > 5)
            {
                steps += 10 - abs(a[i] - b[i]);
            }
            else
            {
                steps += abs(a[i] - b[i]);
            }
        }
    }
    cout << steps << endl;
    return 0;
}