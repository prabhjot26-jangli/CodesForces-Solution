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
    int steps = 1;
    int num = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > num)
        {
            num = arr[i];
        }
        else if (arr[i] <= num)
        {
            num = arr[i];
            steps++;
        }
    }
    int ar[steps];
    int number = 0;
    int iterator = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > number)
        {
            number = arr[i];
            count += 1;
        }
        else if (arr[i] <= number)
        {
            number = arr[i];
            ar[iterator] = count;
            count = 1;
            iterator++;
        }
        if (i == n - 1)
        {
            ar[steps - 1] = count;
        }
    }

    cout << steps << endl;
    for (int k = 0; k < steps; k++)
    {
        cout << ar[k] << " ";
    }
    return 0;
}
