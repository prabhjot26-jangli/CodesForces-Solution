#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{

    string s;
    cin >> s;
    // int a = 'a', z = 'z', A = 'A', Z = 'Z';
    // cout << "a:  " << a << endl;
    // cout << "z:  " << z << endl;
    // cout << "A:  " << A << endl;
    // cout << "Z:  " << Z << endl;
    vector<int> sC, CC;
    for (char c : s)
        // {
        //     if (c >= 97 && c <= 122)
        //     {
        //         sC.push_back(c);
        //     }
        //     if (c >= 65 && c <= 90)
        //     {
        //         CC.push_back(c);
        //     }
        // }
        for (char c : s)
        {
            if (islower(c))
            {
                sC.push_back(c);
            }
            else if (isupper(c))
            {
                CC.push_back(c);
            }
        }

    int A = sC.size(), B = CC.size();
    // cout << "SIZE OF SMALL IS :" << A << endl;
    // cout << "SIZE OF BIG IS :" << B << endl;

    if (A > B)
    {
        for (char &c : s)
        {
            c = tolower(c);
        }
    }
    else if (A == B)
    {
        for (char &c : s)
        {
            c = tolower(c);
        }
    }
    else
    {
        for (char &c : s)
        {
            c = toupper(c);
        }
    }

    cout << s << endl;

    return 0;
}