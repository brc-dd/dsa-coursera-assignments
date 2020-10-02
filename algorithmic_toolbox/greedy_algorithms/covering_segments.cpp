#include <algorithm>
#include <iostream>
#include <iterator>
#include <utility>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define iit istream_iterator<int>(cin)
#define pb push_back

void solve(vector<pair<int, int>> &v) {
  sort(all(v));
  vector<int> r;
  int p = v.front().first;
  r.pb(p);
  for (auto &&i : v)
    if (p > i.first or p < i.second)
      r.pb(p = i.first);
  cout << r.size() << '\n';
  copy(all(r), ostream_iterator<int>(cout, " "));
}

signed main() {
  vector<pair<int, int>> v(*iit);
  for (auto &&i : v)
    i = {*iit, *iit};
  solve(v);
}