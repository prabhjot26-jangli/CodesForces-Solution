#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int row, col, cost = 0, value;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++) // will fill each row first and then net column
        {
            cin >> value;
            if (value == 1)
            {
                row = i;
                col = j;
            }
        }
    }
    int grow = 2, gcol = 2; // goal coordinates cant be 3,3 casue theindex starts from 0,0
    cost = abs((row - grow)) + abs((col - gcol));
    cout << cost << endl;
    return 0;
}