#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // breakit like, i + (i+1) + (i+2) = n
        //  3i = n-3
        //  i = n-3/3
        //  oh damn got it

        if ((n - 3) % 3 == 0)
        {
            int i = (n - 3) / 3;
            cout << i << " " << i + 1 << " " << i + 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}