#include <iostream>
using namespace std;

int main()
{
    int rooms;
    cin >> rooms;
    int space = 0;

    while (rooms--)
    {
        int p, q;
        cin >> p >> q;
        int check = q - p;

        if (check >= 2)
        {
            space++;
        }
    }
    cout << space << endl;
    return 0;
}