#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define iit istream_iterator<int>(cin)

bool helper(const vector<int> &v, int subset[3], vector<bool> &taken,
            int subsetSum, int l, int r) {
  if (subset[l] == subsetSum) {
    if (l == 1)
      return true;
    return helper(v, subset, taken, subsetSum, l + 1, v.size() - 1);
  }
  for (int i = r; i; --i)
    if (not taken[i] and subset[l] + v[i] <= subsetSum) {
      taken[i] = true;
      subset[l] += v[i];
      if (helper(v, subset, taken, subsetSum, l, i - 1))
        return true;
      taken[i] = false;
      subset[l] -= v[i];
    }
  return false;
}

int solve(int n, const vector<int> &v) {
  if (n < 3)
    return false;
  int sum = accumulate(v.begin(), v.end(), 0LL);
  if (sum % 3 != 0)
    return false;
  int subsetSum = sum / 3;
  int subset[3] = {0};
  vector<bool> taken(n);
  subset[0] = v[n - 1];
  taken[0] = true;
  return helper(v, subset, taken, subsetSum, 0, n - 1);
}

signed main() { cout << solve(*iit, vector<int>(iit, {})); }