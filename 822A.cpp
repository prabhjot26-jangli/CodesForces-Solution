#include <iostream>
using namespace std;

long long fact(long long n)
{
    long long result = 1;
    for (long long i = 2; i <= n; i++)
        result *= i;
    return result;
}

int main()
{
    long long p, k;
    cin >> p >> k;

    long long m = min(p, k);
    cout << fact(m) << endl;

    return 0;
}
