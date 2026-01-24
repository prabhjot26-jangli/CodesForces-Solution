#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, d, u;
        cin >> l >> r >> d >> u;

        if (l - r == d - u && u + d == r + l && (u - r == l - d) && (l - u == d - r) && (l - u) == (u - r) && (l - d) == (d - r))
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}