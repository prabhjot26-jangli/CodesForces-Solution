#include <iostream>

using namespace std;

int main()
{

    int limak = 0, bob = 0;
    cin >> limak >> bob;
    int years = 0;
    while (limak <= bob)
    {
        limak = limak * 3;
        bob = bob * 2;
        years++;
    }
    cout << years << endl;

    return 0;
}