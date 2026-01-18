#include <iostream>
#include <cctype>
using namespace std;

int main()
{

    int test = 0;
    cin >> test;

    while (test--)
    {
        string s;
        cin >> s;
        int length = s.length();

        if (length > 10)
        {
            char first = s[0];
            char last = s[length - 1];

            cout << (char)tolower(first) << length - 2 << (char)tolower(last) << endl;
        }
        else
            cout << s << endl;
    }

    return 0;
}