#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char c = s[0];
    s[0] = toupper(c);
    cout << s << endl;

    return 0;
}