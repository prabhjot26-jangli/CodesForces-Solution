#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s, k;
    cin >> s;

    vector<int> nums;
    for (char c : s)
    {
        if (c != '+')
        {
            nums.push_back(c - '0');
        }
    }

    sort(nums.begin(), nums.end());
    bool first = true;
    for (int x : nums)
    {
        if (!first)
            cout << "+";
        cout << x;
        first = false;
    }

    return 0;
}