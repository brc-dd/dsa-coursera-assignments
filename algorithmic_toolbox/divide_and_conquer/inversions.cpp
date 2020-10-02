#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define int long long
#define iit istream_iterator<int>(cin)
#define pb push_back

auto helper(const vector<int> &l, const vector<int> &r, int &c) {
  vector<int> res;
  size_t i = 0, j = 0;
  while (i < l.size() and j < r.size())
    if (l[i] <= r[j])
      res.pb(l[i++]);
    else {
      res.pb(r[j++]);
      c += (l.size() - i);
    }
  res.insert(res.end(), l.begin() + i, l.end());
  res.insert(res.end(), r.begin() + j, r.end());
  return res;
}

auto solve(const vector<int> &v, int &c) {
  if (v.size() < 2)
    return v;
  int m = v.size() / 2;
  return helper(solve(vector<int>(v.begin(), v.begin() + m), c),
                solve(vector<int>(v.begin() + m, v.end()), c), c);
}

signed main() {
  int c = 0;
  *iit;
  solve(vector<int>(iit, {}), c);
  cout << c;
}