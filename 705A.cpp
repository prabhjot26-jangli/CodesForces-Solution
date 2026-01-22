#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    bool flag = true;
    if (n == 1)
    {
        cout << "I hate it" << endl;
        flag = false;
    }
    // love-hate-love-hate-love-hate
    int i = 1;
    while (i <= n && flag)
    {
        if (i % 2 != 0)
        {
            if (i == n)
            {
                cout << "I hate it";
            }
            else
                cout << "I hate that ";
        }
        else if (i % 2 == 0)
        {
            if (i == n)
            {
                cout << "I love it ";
            }
            else
                cout << "I love that ";
        }
        i++;
    }
    return 0;
}