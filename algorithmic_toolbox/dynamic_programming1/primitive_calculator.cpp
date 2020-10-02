#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define iit istream_iterator<int>(cin)
#define pb push_back

void solve(int n) {
  vector<int> dp(n + 1);
  for (int i = 2; i <= n; i++) {
    dp[i] = dp[i - 1] + 1;
    if (i % 2 == 0)
      dp[i] = min(dp[i / 2] + 1, dp[i]);
    if (i % 3 == 0)
      dp[i] = min(dp[i / 3] + 1, dp[i]);
  }
  cout << dp[n] << '\n';
  vector<int> seq;
  seq.pb(n);
  while (n != 1)
    seq.pb((n = (((n % 2) ? -1 : (n / 2)) == -1)
                    ? ((((n % 3) ? -1 : (n / 3)) == -1)
                           ? ((n - 1))
                           : (dp[(n - 1)] < dp[((n % 3) ? -1 : (n / 3))]
                                  ? (n - 1)
                                  : ((n % 3) ? -1 : (n / 3))))
                    : ((((n % 3) ? -1 : (n / 3)) == -1)
                           ? (dp[(n - 1)] < dp[((n % 2) ? -1 : (n / 2))]
                                  ? (n - 1)
                                  : ((n % 2) ? -1 : (n / 2)))
                           : (dp[(n - 1)] < dp[((n % 2) ? -1 : (n / 2))]
                                  ? (dp[(n - 1)] < dp[((n % 3) ? -1 : (n / 3))]
                                         ? (n - 1)
                                         : ((n % 3) ? -1 : (n / 3)))
                                  : (dp[((n % 2) ? -1 : (n / 2))] <
                                             dp[((n % 3) ? -1 : (n / 3))]
                                         ? ((n % 2) ? -1 : (n / 2))
                                         : ((n % 3) ? -1 : (n / 3)))))));
  reverse(all(seq));
  copy(all(seq), ostream_iterator<int>(cout, " "));
}

signed main() { solve(*iit); }