#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int yakko, wakko;
    cin >> yakko >> wakko;

    int arr[2];
    arr[0] = {wakko};
    arr[1] = {yakko};

    sort(arr, arr + 2);

    int max_number = arr[1];
    // cout << max_number << " -<This is max number value" << endl;

    int dice[6] = {1, 2, 3, 4, 5, 6};
    int count = 0;

    for (int i = 0; i < 6; i++)
    {
        if (dice[i] >= max_number)
        {
            count += 1;
        }
    }
    // cout << "this is count value " << count << endl;

    if (count == 5)
    {
        cout << "5/6" << endl;
    }
    else if (count == 6)
    {
        cout << "1/1" << endl;
    }
    else if (count == 4)
    {
        cout << "2/3" << endl;
    }
    else if (count == 3)
    {
        cout << "1/2" << endl;
    }
    else if (count == 2)
    {
        cout << "1/3" << endl;
    }
    else if (count == 1)
    {
        cout << "1/6" << endl;
    }
    else
    {
        cout << "0/6" << endl;
    }
    return 0;
}