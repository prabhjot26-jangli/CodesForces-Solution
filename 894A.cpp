#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int len = n.length();
    string w = "";
    for (int i = 0; i < len; i++)
    {
        if (n[i] == 'Q' || n[i] == 'A')
        {
            w += n[i];
        }
    }
    int op = w.length();
    int count = 0;
    for (int i = 0; i < op; i++)
    {
        if (w[i] == 'Q')
        {
            for (int k = i + 1; k < op; k++)
            {
                if (w[k] == 'A')
                {
                    for (int j = k + 1; j < op; j++)
                    {
                        if (w[j] == 'Q')
                        {
                            count += 1;
                        }
                    }
                }
            }
        }
    }
    cout << count << endl;

    return 0;
}