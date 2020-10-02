#include <iostream>
#include <vector>
using namespace std;

#define int long long
#define pb push_back

int solve(vector<int> &v, int d, int m) {
  int n = v.size(), ctr = 0, l = 0;
  v.pb(d);
  for (int i = 0; i < n and l + m < d; ++i)
    if (v[i] > l + m) {
      ctr = -1;
      break;
    } else if (v[i + 1] > l + m) {
      l = v[i];
      ++ctr;
    }
  if (l + m < d)
    return -1;
  return ctr;
}

signed main() {
  int d, m, n;
  cin >> d >> m >> n;
  vector<int> v(n);
  for (auto &&i : v)
    cin >> i;
  cout << solve(v, d, m);
}