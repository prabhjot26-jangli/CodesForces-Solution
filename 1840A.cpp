#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string result = "";
        int i = 0;

        while (i < n)
        {
            char current = s[i];
            result += current;

            int j = i + 1;
            while (j < n && s[j] != current)
            {
                j++;
            }
            i = j + 1;
        }

        cout << result << endl;
    }

    return 0;
}