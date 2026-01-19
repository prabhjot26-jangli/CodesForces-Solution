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

// This is a next round problem in which we decide on the K TH score that which team will 
//go in the next round or not We store the scores of each team in an array which is less than equal to 50
// Then we compare those teams which have a score greater than the KTH score and score greater than 0
//They proceed towards the next round and then we print the final total number of teams
