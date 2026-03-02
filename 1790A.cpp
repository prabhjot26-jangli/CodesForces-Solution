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
        string pi = "314159265358979323846264338327";
        int count = 0;
        bool flag = true;
        for (int i = 0; i < 30; i++)
        {
            if (s[i] == pi[i])
            {
                count++;
            }
            else
            {
                cout << count << endl;
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << count << endl;
        }
    }
    return 0;
}