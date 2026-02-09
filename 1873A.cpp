#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (s == "abc")
        {
            cout << "YES\n";
        }
        else
        {
            int mismatch = 0;
            string target = "abc";
            for (int i = 0; i < 3; i++)
            {
                if (s[i] != target[i])
                    mismatch++;
            }
            cout << (mismatch == 2 ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
