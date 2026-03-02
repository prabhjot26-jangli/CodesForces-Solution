#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char arr[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int k = 0; k < 10; k++)
            {
                cin >> arr[i][k];
            }
        }
        int score[10][10] = {
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
            {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
            {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
            {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
            {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
            {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
            {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
            {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}

        };
        int points = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (arr[i][k] == 'X')
                {
                    points += score[i][k];
                }
            }
        }
        cout << points << endl;
    }
    return 0;
}