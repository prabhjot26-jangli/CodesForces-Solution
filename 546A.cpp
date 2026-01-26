#include <iostream>

using namespace std;

int main()
{
    int kdollars, wbanana;
    long long int ndollars = 0;
    cin >> kdollars >> ndollars >> wbanana;
    int total = 0;

    for (int i = 1; i <= wbanana; i++)
    {
        total = total + kdollars * i;
    }
    if (total > ndollars)
    {
        cout << total - ndollars << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}