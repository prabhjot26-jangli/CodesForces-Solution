#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int red = 0, green = 0, blue = 0;
    char first_element;

    vector<char> colors;
    for (char c : s)
    {
        colors.push_back(c);
    }
    int size = colors.size();
    // for (char c : s)
    // {
    //     cout << c << " ";
    // }

    // cout << "SIZE OF COLORS IS -> " << size << endl;

    first_element = colors[0];
    for (int i = 1; i < size; i++)
    {
        if (colors[i] == 'R')
        {
            if (first_element == 'R')
            {
                red++;
            }
        }
        else if (colors[i] == 'G')
        {
            if (first_element == 'G')
            {
                green++;
            }
        }
        else if (colors[i] == 'B')
        {
            if (first_element == 'B')
            {
                blue++;
            }
        }
        first_element = colors[i];
    }

    cout << red + blue + green << endl;

    return 0;
}