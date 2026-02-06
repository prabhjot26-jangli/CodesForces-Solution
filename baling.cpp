#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t0, t1, t2;
    cin >> t0 >> t1 >> t2;

    int path1 = abs(t0 - t1) + abs(t1 - t2);
    int path2 = abs(t0 - t2) + abs(t2 - t1);

    cout << min(path1, path2) << endl;

    return 0;
}
