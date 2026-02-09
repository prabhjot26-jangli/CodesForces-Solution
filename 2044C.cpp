#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long int total, m, a, b, c;
        cin >> m >> a >> b >> c;
        total = a + b + c;
        int seatedM1 = 0, seatedM2 = 0;
        int emptySeatsM1 = 0, emptySeatsM2 = 0;
        if (a <= m)
        {
            seatedM1 = a;
            emptySeatsM1 = m - a;
        }
        else if (a > m)
        {
            emptySeatsM1 = 0;
            seatedM1 = m;
        }
        if (b <= m)
        {
            seatedM2 = b;
            emptySeatsM2 = (m - b);
        }
        else if (b > m)
        {
            emptySeatsM2 = 0;
            seatedM2 = m;
        }
        // now here i can put all the c monekys on seats
        int totalEmptyChairs = emptySeatsM1 + emptySeatsM2;
        int seated_c_monekys = 0;
        if (c >= totalEmptyChairs)
        {
            seated_c_monekys = totalEmptyChairs;
        }
        else if (c < totalEmptyChairs)
        {
            seated_c_monekys = c;
        }
        total = seatedM1 + seatedM2 + seated_c_monekys;
        cout << total << endl;
    }

    return 0;
}