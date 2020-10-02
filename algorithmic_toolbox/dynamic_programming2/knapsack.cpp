#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define iit istream_iterator<int>(cin)

int solve(int W, int n, const vector<int> &w) {
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

signed main() { cout << solve(*iit, *iit, vector<int>(iit, {})); }