#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    vector<char> queue;
    for (char c : s)
    {
        queue.push_back(c);
    }
    while (t--)
    {
        for (int i = 0; i < n;)
        {

            if (queue[i] == 'B' && queue[i + 1] == 'G' && (i + 1) < n)
            {
                queue[i] = 'G';
                queue[i + 1] = 'B';
                i = i + 2;
            }
            else
            {
                i++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << queue[i];
    }

    return 0;
}