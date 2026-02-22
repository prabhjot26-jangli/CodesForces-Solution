#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    for (long long i = 3; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int gcd(int p, int k)
{
    while (k != 0)
    {
        int temp = k;
        k = p % k;
        p = temp;
    }
    return p;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        // long long k = 0;
        // if (isPrime(n))
        // {
        //     n = n - 1;
        //     k = n / 2;
        // }
        // else
        // {
        //     k = n / 2;
        // }
        // int y = gcd(n, k);
        int y = n / 2;
        cout << y << endl;
    }

    return 0;
}