#include <iostream>
using namespace std;

int max4(int a, int b, int c, int d)
{
    return max(max(a, b), max(c, d));
}
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
        int a = 0, b = 0, c = 0, d = 0;
        for (int i = 0; i < n * 4; i++)
        {
            if (s[i] == 'A')
            {
                if (a < n)
                    a++;
            }
            else if (s[i] == 'B')
            {
                if (b < n)
                    b++;
            }
            else if (s[i] == 'C')
            {
                if (c < n)
                    c++;
            }
            else if (s[i] == 'D')
            {
                if (d < n)
                    d++;
            }
        }
        int highest = max4(a, b, c, d);
        cout << a + b + c + d << endl;
    }

    return 0;
}