#include <iostream>
using namespace std;

int main()
{
    // bool h = false, e = false, o = false;
    // int l = 0;
    string s;
    cin >> s;
    int n = s.length();

    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] == 'h')
    //     {
    //         h = true;
    //     }
    //     else if (s[i] == 'e')
    //     {
    //         e = true;
    //     }
    //     else if (s[i] == 'o')
    //     {
    //         o = true;
    //     }
    //     else if (s[i] == 'l')
    //     {
    //         l++;
    //     }
    // }
    // if (h && e && o && l >= 2)
    string check = "hello";
    int a = 0;
    for (int i = 0; i < n;)
    {
        if (s[i] == check[a])
        {
            a++;
            i++;
        }
        else
        {
            i++;
        }
        if (a >= 5)
        {
            break;
        }
    }
    if (a == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}