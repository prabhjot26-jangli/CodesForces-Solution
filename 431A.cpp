#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    string s;
    cin >> s;
    int score = 0;

    for (char c : s)
    {
        if (c == '1' - 0)
        {
            score += a1;
        }
        else if (c == '2' - 0)
        {
            score += a2;
        }
        else if (c == '3' - 0)
        {
            score += a3;
        }
        else if (c == '4' - 0)
        {
            score += a4;
        }
    }
    cout << score << endl;

    return 0;
}