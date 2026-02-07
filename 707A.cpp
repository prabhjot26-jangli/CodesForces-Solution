#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int white = 0, black = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'W')
            {
                white++;
            }
            else if (arr[i][j] == 'B')
            {
                black++;
            }
            else if (arr[i][j] == 'G')
            {
                black++;
            }
        }
    }

    if (black + white == n * m)
    {
        cout << "#Black&White" << endl;
    }
    else
    {
        cout << "#color" << endl;
    }

    return 0;
}