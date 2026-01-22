#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        // int size = 3;

        // int arr[size];
        // for (int i = 0; i < size; i++)
        // {
        //     arr[i] = s[i];
        // }
        int A = s[0] - '0';
        int B = s[2] - '0';

        cout << A + B << endl;
        // cout << B << endl;
    }

    return 0;
}