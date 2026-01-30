#include <iostream>

using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    int time = 240;
    int time_left = time - k;
    int problems = 0;
    int solve_time = 0;
    
    for (int i = 0; i < n; i++)
    {
        solve_time = solve_time + 5 * (1 + i);
        problems++;
        if (solve_time < time_left)
        {
            continue;
        }
        else if (solve_time == time_left)
        {
            cout << problems << endl;
            return 0;
        }
        else if (solve_time > time_left)
        {
            cout << problems - 1 << endl;
            return 0;
        }
    }
    cout << problems << endl;

    return 0;
}