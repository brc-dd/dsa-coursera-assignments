#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()

bool solve(vector<int> &v) {
  int m = 0, c = 0;
  for (auto &&i : v)
    if (c == 0)
      m = i, c = 1;
    else
      c += m == i ? 1 : -1;
  return count(all(v), m) > v.size() / 2;
}

signed main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &&i : v)
    cin >> i;
  cout << solve(v);
}