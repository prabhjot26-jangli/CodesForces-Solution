#include <iostream>

using namespace std;

int main()

{
  int test = 0;
  cin >> test;
  int x = 0;
  string s;

  while (test--)
  {
    cin >> s;

    if (s[1] == '+')
    {
      x = x + 1;
    }
    else if (s[1] == '-')
    {
      x = x - 1;
    }
  }
  cout << x << endl;

  return 0;
}