#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, c;
    int x, y, z;

    while (t--)
    {

        cin >> a >> b >> c;
        int arr1[3] = {a, b, c};

        cin >> x >> y >> z;
        int arr2[3] = {x, y, z};
        sort(arr1, arr1 + 3);
        sort(arr2, arr2 + 3);

        int price = arr2[2] * arr1[2] + arr2[1] * arr1[1] + arr2[0] * arr1[0];
        cout << price << endl;
    }
    return 0;
}