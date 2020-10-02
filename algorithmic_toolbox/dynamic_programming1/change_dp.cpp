#include <climits>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define int long long
#define iit istream_iterator<int>(cin)

int solve(int n) {
  vector<int> den = {1, 3, 4}, dp(n + 1, LLONG_MAX);
  dp[0] = 0;
  for (int i = 1; i <= n; ++i)
    for (int j = 0; j < den.size() and den[j] <= i; ++j)
      if (dp[i - den[j]] != INT_MAX and dp[i - den[j]] + 1 < dp[i])
        dp[i] = dp[i - den[j]] + 1;
  return dp[n];
}

signed main() { cout << solve(*iit); }