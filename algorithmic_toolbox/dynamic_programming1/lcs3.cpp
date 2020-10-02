#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define i_i istream_iterator<int>(cin)

int solve(vector<int> &a, vector<int> &b, vector<int> &c) {
  int n = a.size(), m = b.size(), l = c.size();
  vector<vector<vector<int>>> dp(
      n + 1, vector<vector<int>>(m + 1, vector<int>(l + 1)));
  for (int i = 0; i <= n; ++i)
    for (int j = 0; j <= m; ++j)
      for (int k = 0; k <= l; ++k)
        if (i and j and k) {
          if (a[i - 1] == b[j - 1] and b[j - 1] == c[k - 1])
            dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
          else
            dp[i][j][k] =
                max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
        }
  return dp[n][m][l];
}

signed main() {
  vector<int> a(*i_i);
  copy_n(i_i, a.size(), a.begin());
  vector<int> b(*i_i);
  copy_n(i_i, b.size(), b.begin());
  vector<int> c(*i_i);
  copy_n(i_i, c.size(), c.begin());
  cout << solve(a, b, c);
}