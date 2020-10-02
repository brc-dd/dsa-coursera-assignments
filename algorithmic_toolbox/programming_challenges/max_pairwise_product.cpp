#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()

int solve(vector<int> &v) {
  sort(all(v));
  auto n = v.size();
  return max(v[0] * v[1], v[n - 2] * v[n - 1]);
}

signed main() {
  int n;
  cin >> n;
  vector<int> v(istream_iterator<int>(cin), {});
  cout << solve(v);
}
