#include <iostream>

using namespace std;

int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        char ch;
        cin >> ch;
        string s = "codeforces";
        bool found = false;
        for (char c : s)
        {
            if (c == ch)
            {
                found = true;
                break;
            }
        }

        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
