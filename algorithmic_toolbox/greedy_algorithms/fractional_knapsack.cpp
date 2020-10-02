#include <algorithm>
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define iit istream_iterator<int>(cin)

double solve(vector<pair<int, int>> &v, int w) {
  int c = 0, r;
  auto f = 0.;
  sort(all(v), [](auto &a, auto &b) {
    return (double)a.first / a.second > (double)b.first / b.second;
  });
  for (auto &&i : v)
    if (c + i.second <= w) {
      c += i.second;
      f += i.first;
    } else {
      r = w - c;
      f += i.first * (double)r / i.second;
      break;
    }
  return f;
}

signed main() {
  auto n = *iit, w = *iit;
  vector<pair<int, int>> v(n);
  for (auto &&i : v)
    i = {*iit, *iit};
  cout << fixed << setprecision(4) << solve(v, w);
}