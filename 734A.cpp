#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    string s;
    cin >> s;
    int Anton = 0, Danik = 0;

    for (char c : s)
    {
        if (c == 'A')
        {
            Anton++;
        }
        else if (c == 'D')
        {
            Danik++;
        }
    }
    if (Anton > Danik)
    {
        cout << "Anton" << endl;
    }
    else if (Anton == Danik)
    {
        cout << "Friendship" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }

    return 0;
}