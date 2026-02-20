#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {

        if (i % 2 == 0)
        {
            for (int i = 0; i < col; i++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else
        {
            if ((i / 2) % 2 == 0)
            {
                for (int i = 0; i < col - 1; i++)
                {
                    cout << ".";
                }
                cout << "#" << endl;
            }
            else
            {
                cout << "#";
                for (int i = 0; i < col - 1; i++)
                {
                    cout << ".";
                }
                cout << endl;
            }
        }
    }

    return 0;
}