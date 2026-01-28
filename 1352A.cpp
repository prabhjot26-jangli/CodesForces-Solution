#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        vector<int> parts;
        int n = s.length();
        int power = 1;
        for (int i = 1; i < n; i++)
            power *= 10;

        for (int i = 0; i < n; i++)
        {
            int digit = s[i] - '0';
            if (digit != 0)
            {
                parts.push_back(digit * power);
            }
            power /= 10;
        }

        cout << parts.size() << endl;
        for (int x : parts)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
