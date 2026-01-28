#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string n, k;
    cin >> n;
    cin >> k;
    int length = n.length();
    string answer = "";

    for (int i = 0; i < length; i++)
    {
        if (n[i] == k[i])
        {
            answer = answer + "0";
        }
        else
        {
            answer += "1";
        }
    }
    cout << answer << endl;
    return 0;
}