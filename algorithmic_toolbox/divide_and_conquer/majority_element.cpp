#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define iit istream_iterator<int>(cin)

bool solve(const vector<int> &v) {
  int m = 0, c = 0;
  for (auto &&i : v)
    if (c == 0)
      m = i, c = 1;
    else
      c += m == i ? 1 : -1;
  return count(all(v), m) > v.size() / 2;
}

signed main() {
  *iit;
  cout << solve(vector<int>(iit, {}));
}