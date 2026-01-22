#include <iostream>

using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    bool flag = true;
    int n = s.length();
    int p = t.length();

    if (n != p)
    {
        cout << "NO" << endl;
        return 0;
    }
    int A[n], B[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = s[i];
    }
    for (int i = 0; i < n; i++)
    {
        B[i] = t[i];
    }
    // cout << "Length is " << n << endl;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == B[n - 1 - i])
        {
            // cout << "yyyyes" << endl;
        }
        else
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}