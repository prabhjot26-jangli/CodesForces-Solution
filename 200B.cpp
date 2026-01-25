#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int n = 0;
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    double sum = 0;
    double answer = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    answer = sum / n;
    printf("%.10f", answer);

    return 0;
}