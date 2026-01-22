#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string answer = "";

    int n = s.length();

    char arr[n + 1];

    for (int i = 0; i < n; i++)
    {
        arr[i] = s[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == '.')
        {
            answer = answer + "0";
        }
        else if (arr[i] == '-' && arr[i + 1] == '.')
        {
            answer = answer + "1";
            i++;
        }
        else if (arr[i] == '-' && arr[i + 1] == '-')
        {
            answer = answer + "2";
            i++;
        }

        // }
    }
    cout << answer << endl;
}