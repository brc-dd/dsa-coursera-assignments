#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define i_i istream_iterator<int>(cin)

int solve(vector<int> &a, vector<int> &b) {
  int n = a.size(), m = b.size();
  vector<vector<int>> dp(n + 1, vector<int>(m + 1));
  for (int i = 0; i <= n; ++i)
    for (int j = 0; j <= m; ++j)
      if (i != 0 and j != 0) {
        if (a[i - 1] == b[j - 1])
          dp[i][j] = dp[i - 1][j - 1] + 1;
        else
          dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
      }
  return dp[n][m];
}

signed main() {
  vector<int> a(*i_i);
  copy_n(i_i, a.size(), a.begin());
  vector<int> b(*i_i);
  copy_n(i_i, b.size(), b.begin());
  cout << solve(a, b);
}