#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 26)
    {
        cout << "NO" << endl;
        return 0;
    }
    string s;
    cin >> s;
    // getline(cin, s);
    for (char &c : s)
    {
        c = tolower(c);
    }
    // for (char &c : s)
    // {
    //     cout << c << endl;
    // }

    // cout << s << endl;
    set<char> st;
    for (char c : s)
    {
        if ((c >= 'a' && c <= 'z'))
        {
            st.insert(c);
        }
    }

    if (st.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}