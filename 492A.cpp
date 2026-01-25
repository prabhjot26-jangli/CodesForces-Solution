#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int level = 0;
    int sum = 0;
    int total = 0;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    while (total < n)
    {
        for (int i = 1; i <= n; i++)
        {
            sum = (i * (i + 1)) / 2;
            total += sum;
            if (total <= n)
            {
                level++;
                continue;
            }
            else
            {
                cout << level << endl;
                return 0;
            }
            level++;
        }
    }

    return 0;
}