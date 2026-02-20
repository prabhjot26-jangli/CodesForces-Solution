#include <iostream>
using namespace std;

int main()
{
    int k = 0;
    cin >> k;
    int number = 0;
    int remainder = 0;

    if (k % 2 == 0)
    {
        int count2 = k / 2;
        cout << count2 << endl;
        for (int i = 1; i <= count2; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {

        number = k / 2;
        remainder = k % 2;
        int count2 = number - 1;
        cout << number << endl;
        cout << 3 << " ";
        for (int i = 0; i < count2; i++)
        {
            cout << 2 << " ";
        }
    }
    return 0;
}