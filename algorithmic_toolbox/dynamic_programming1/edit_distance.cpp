#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()

int solve(string &a, string &b) {
  int l1 = a.size(), l2 = b.size();
  vector<vector<int>> dp(2, vector<int>(l1 + 1));
  iota(all(dp[0]), 0);
  for (int i = 1; i <= l2; ++i)
    for (int j = 0; j <= l1; ++j)
      if (!j)
        dp[i & 1][j] = i;
      else if (a[j - 1] == b[i - 1])
        dp[i & 1][j] = dp[(i - 1) & 1][j - 1];
      else
        dp[i & 1][j] = 1 + min({dp[(i - 1) & 1][j], dp[i & 1][j - 1],
                                dp[(i - 1) & 1][j - 1]});
  return dp[l2 & 1][l1];
}

signed main() {
  string a, b;
  cin >> a >> b;
  cout << solve(a, b);
}