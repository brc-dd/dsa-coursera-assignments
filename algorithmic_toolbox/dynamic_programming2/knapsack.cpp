#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define iit istream_iterator<int>(cin)

int solve(int W, vector<int> &w) {
  int n = w.size();
  vector<vector<int>> dp(n + 1, vector<int>(W + 1));
  for (int i = 0; i <= n; ++i)
    for (int j = 0; j <= W; ++j)
      if (i and j) {
        if (w[i - 1] <= j)
          dp[i][j] = max(w[i - 1] + dp[i - 1][j - w[i - 1]], dp[i - 1][j]);
        else
          dp[i][j] = dp[i - 1][j];
      }
  return dp[n][W];
}

signed main() {
  auto W = *iit;
  vector<int> w(*iit);
  copy_n(iit, w.size(), w.begin());
  cout << solve(W, w);
}