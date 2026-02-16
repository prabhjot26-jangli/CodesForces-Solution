#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        string s1;
        cin >> s1;
        int b;
        cin >> b;
        string s2;
        cin >> s2;
        string order;
        cin >> order;

        string temp1 = "", temp2 = "";
        for (int i = 0; i < b; i++)
        {
            if (order[i] == 'D')
            {
                temp1 = temp1 + s2[i];
            }
        }
        for (int i = b - 1; i >= 0; i--)
        {
            if (order[i] == 'V')
            {
                temp2 += s2[i];
            }
        }
        cout << temp2 + s1 + temp1 << endl;
    }
    return 0;
}