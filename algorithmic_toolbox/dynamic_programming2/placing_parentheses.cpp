#include <algorithm>
#include <climits>
#include <iostream>
#include <iterator>
#include <string>
#include <utility>
#include <vector>
using namespace std;

#define int long long

int helper(int a, int b, char op) {
  return op == '*' ? a * b : op == '+' ? a + b : a - b;
}

int solve(const string &str) {
  auto l = str.size(), n = (l + 1) / 2;
  vector<vector<pair<int, int>>> dp(n, vector<pair<int, int>>(n));
  for (int i = 0; i < n; i++)
    dp[i][i] = {str[2 * i] - '0', str[2 * i] - '0'};
  for (int s = 0; s < n - 1; s++)
    for (int i = 0; i < n - s - 1; i++) {
      int j = i + s + 1;
      std::pair<int, int> value = {LLONG_MAX, LLONG_MIN};
      for (int k = i; k < j; k++) {
        auto a = helper(dp[i][k].first, dp[k + 1][j].first, str[2 * k + 1]),
             b = helper(dp[i][k].first, dp[k + 1][j].second, str[2 * k + 1]),
             c = helper(dp[i][k].second, dp[k + 1][j].first, str[2 * k + 1]),
             d = helper(dp[i][k].second, dp[k + 1][j].second, str[2 * k + 1]);

        value.first = min({value.first, a, b, c, d});
        value.second = max({value.second, a, b, c, d});
      }
      dp[i][j] = value;
    }
  return dp[0][n - 1].second;
}

signed main() { cout << solve(*istream_iterator<string>(cin)); }