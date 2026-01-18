#include <iostream>
using namespace std;
int main()
{
  int n = 0, k = 0, total = 0;
  cin >> n >> k;

  int scores[50];
  for (int i = 0; i < n; i++)
  {
    cin >> scores[i];
  }

  int kth_score = scores[k - 1];

  for (int i = 0; i < n; i++)
  {
    if (scores[i] >= kth_score && scores[i] > 0)
      total++;
  }

  cout << total << endl;
  return 0;
}