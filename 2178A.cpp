#include <iostream>
using namespace std;

void solve();
void pattern();
void again();

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
        // pattern();
        // again()'
    }
    return 0;
}
void solve()
{
    string s;
    cin >> s;
    int N = s.length();

    for (int i = 0; i < N - 1; i++)
    {
        if ((i + 1 < N && s[i] == 'Y' && s[i + 1] == 'Y'))
        {
            cout << "NO" << endl;
            return;
        }
    }

    string result = "";
    for (int i = 0; i < N; i++)
    {
        if (s[i] == 'Y')
        {
            result += s[i];
        }

        else if (s[i] == 'N')
        {
            if (!result.empty() && result.back() == 'N')
            {
                continue;
            }
            else
            {
                result += s[i];
            }
        }
    }
    // cout << "RESULT : ";
    // for (char c : result)
    // {
    //     cout << c;
    // }
    // cout << endl;
    int NN = result.length();

    if (NN == 1 || NN == 2)
    {
        cout << "YES" << endl;
        return;
    }

    if (NN >= 3)
    {
        for (int i = 0; i < NN - 2; i++)
        {
            if (result[i] == 'Y' &&
                result[i + 1] == 'N' &&
                result[i + 2] == 'Y')
            {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
        return;
    }
}

void again()

{
    string s;
    cin >> s;
    int Ylen = 0;
    int max = 0;
    int length = s.length();
    if (length >= 3)
    {
        for (int i = 0; i < length - 2; i++)
        {
            if (s[i] == 'Y' &&
                s[i + 1] == 'N' &&
                s[i + 2] == 'Y')
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    for (char c : s)
    {
        if (c == 'Y')
        {
            Ylen++;
        }
        else
        {
            Ylen = 0;
        }
        if (Ylen > max)
        {
            max = Ylen;
        }
    }
    if (max >= 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
void pattern()
{
    string s;
    cin >> s;
    int N = s.length();
    int yes = 0;
    int no = 0;
    for (int i = 0; i < N; i++)
    {

        if (s[i] == 'Y')
        {
            if (s[i] == 'Y' && i == N - 1)
            {
                /////
            }
            if ((i + 1) < N && s[i + 1] == 'Y')
            {
                yes = 0;
            }
            else
            {
                yes++;
            }
        }
        else if (yes > 0)
        {
            no++;
        }

        if (i > 0 && no > 0)
        {

            if (s[i] == 'Y' && s[i - 1] == 'N')
            {
                yes++; // here y = 2;
            }
        }
    }
    if (yes == 0)
    {
        cout << "NO" << endl;
        return;
    }
    else if (yes == 2 && no > 0)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        return;
    }
}