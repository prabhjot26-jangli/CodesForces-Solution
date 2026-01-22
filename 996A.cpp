#include <iostream>

using namespace std;
int main()
{
    long long int n = 0;
    cin >> n;
    // 1,5,10,20,100
    int notes = 0;
    int quotient;
    int reminder;
    if (n >= 100)
    {
        quotient = n / 100;
        reminder = n % 100;
        notes += quotient;
        n = reminder;
    }
    if (n < 100 && n >= 20 && n != 0)
    {
        quotient = n / 20;
        reminder = n % 20;
        notes += quotient;
        n = reminder;
    }
    if (n < 20 && n >= 10 && n != 0)
    {
        quotient = n / 10;
        reminder = n % 10;
        notes += quotient;
        n = reminder;
    }
    if (n < 10 && n >= 5 && n != 0)
    {
        quotient = n / 5;
        reminder = n % 5;
        notes += quotient;
        n = reminder;
    }
    if (n < 5 && n >= 1 && n != 0)
    {
        quotient = n / 1;
        // reminder = reminder % 1;
        notes += quotient;
    }

    // which will be true in all cases i guess
    {
        cout << notes << endl;
    }

    return 0;
}