#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
void solve()
{
    int N = 1;
    cin >> N;
    //    string A = "BAN";
    //     string B = "";
    // double totallength = 3 * N;
    //     int K = N;
    //     while (K--)
    //     {
    //         B += A;
    //     }
    //     // cout << B << endl;
    // double totalsteps = ceil(totallength / 6);
    //     // cout << totalsteps << endl;
    // int ops = (N + 1) / 2;
    double steps = ceil((double)(N * 3) / 6);
    // cout << "OPS : " << ops << " " << "CEIL : " << steps << endl;

    cout << steps << endl;

    for (int i = 0; i < steps; i++)
    {
        cout << 3 * i + 2 << " " << 3 * N - 3 * i << endl;
    }

    // else
    // {
    //     int highest_number = totallength;
    //     cout << totalsteps << endl;

    //     for (int i = 0; i < totalsteps; i++)
    //     {
    //         cout << highest_number - 4 << " " << highest_number << endl;
    //         highest_number -= 4;
    //     }
    // }

    //     else
    //     {
    //         int highest_number = totallength;
    //         cout << totalsteps << endl;

    //         if (N % 2 == 0)
    //         {
    //             for (int i = 0; i < totalsteps; i++)
    //             {
    //                 cout << highest_number - 4 << " " << highest_number << endl; // this is temeeeempray
    //                 highest_number -= 6;                                         // htssssss  isss permanent schange
    //             }
    //         }
    //         else
    //         {
    //             for (int i = 0; i < totalsteps; i++)
    //             {
    //                 cout << highest_number - 4 << " " << highest_number << endl;
    //                 highest_number -= 4;
    //             }
    //         }
    //     }
}