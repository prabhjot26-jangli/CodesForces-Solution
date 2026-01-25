#include <iostream>
using namespace std;

void function(long long int n)
{

    if (n % 2 == 0)
        cout << n / 2;
    else
        cout << -(n + 1) / 2;
}

int main()

{

    long long int n = 0;
    cin >> n;
    function(n);

    return 0;
}