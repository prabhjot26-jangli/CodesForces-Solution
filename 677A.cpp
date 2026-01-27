#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    vector<int> height;
    height.reserve(n);

    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    int width = 0;
    for (int i = 0; i < n; i++)
    {
        if (height[i] > h)
        {
            width += 2;
        }
        else
        {
            width++;
        }
    }
    cout << width << endl;
    return 0;
}