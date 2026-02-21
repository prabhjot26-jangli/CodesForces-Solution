#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char c = s[0];
        int num = s[1] - '0';

        for (int i = 1; i <= 8; i++)
        {
            if (i == num)
            {
            }
            else
            {
                cout << c << i << endl;
            }
        }
        char ch[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
        for (int i = 0; i < 8; i++)
        {
            if (ch[i] == c)
            {
            }
            else
            {
                cout << ch[i] << num << endl;
            }
        }
    }
    return 0;
}