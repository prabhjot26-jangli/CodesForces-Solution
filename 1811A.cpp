// Here we have to add the number in the string in such a way that we
// get the maximum number So for that you will have to compare the digit from the starting of the string
// the moment we find a number In the string which is give which is less than the given number that is where we insert it.
#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int n, d;
        cin >> n >> d;

        string s;
        cin >> s;

        bool inserted = false;

        for (int i = 0; i < n; i++)
        {
            if (d > s[i] - '0')
            {
                s.insert(i, 1, char('0' + d)); // insert(where to insert, how mant times, what to insert)
                inserted = true;
                break;
            }
        }

        if (!inserted)
        {
            s.push_back(char('0' + d)); // add the dight to the last of the string
        }

        cout << s << endl;
    }
}

// less optimized solution! is below

// #include <iostream>

// using namespace std;

// int main()
// {
//     int test = 0;
//     cin >> test;

//     while (test--)
//     {
//         int n, d, index = 0;
//         cin >> n >> d;
//         string s, left, right, result;
//         cin >> s;
//         bool inserted = false;
//
//         for (int i = 0; i < n; i++)
//         {
//             int curr = s[i] - '0';
//             if (d > curr)
//             {
//                 index = i;
//                 left = s.substr(0, i);
//                 right = s.substr(i);
//                 result = left + to_string(d) + right;
//                 inserted = true;
//                 break;
//             }

//             if (!inserted)
//             {
//                 result = s + to_string(d);
//             }
//         }

//         cout << result << endl;
//     }

//     return 0;
// }