#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int hired = 0, crime = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1 && hired == 0)
        {
            crime++;
        }
        else if (arr[i] == -1 && hired > 0)
        {
            hired--;
        }
        else
        {
            hired += arr[i];
        }
    }
    cout << crime << endl;

    return 0;
}