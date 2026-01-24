#include <iostream>

using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    bool flag = true;
    int shovels = 1;
    int add = k;

    while (flag)
    {
        if ((k - r) % 10 == 0 || k % 10 == 0)
        {
            cout << shovels << endl;
            flag = false;
        }
        else
        {
            k = k + add;
            shovels++;
        }
    }
    return 0;
}