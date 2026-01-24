#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int first_element = arr[0];
    int amazing = 0, least = 0, highest = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < first_element)
        {
            least = arr[i];
            amazing++;
        }
        else if (arr[i] > first_element)
        {
            highest = arr[i];
            amazing++;
        }
    }
    cout << amazing << endl;

    return 0;
}