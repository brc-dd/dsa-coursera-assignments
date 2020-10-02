#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <utility>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define iit istream_iterator<int>(cin)
#define pb push_back

#define x first
#define y second

inline auto dist(pair<int, int> &p1, pair<int, int> &p2) {
  return sqrtl((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

float min_distance(vector<pair<int, int>>::iterator beg,
                   vector<pair<int, int>>::iterator end) {
  auto n = end - beg, mid = n / 2;
  if (n == 2)
    return dist(*beg, *(beg + 1));
  if (n == 3)
    return min({dist(*beg, *(beg + 1)), dist(*(beg + 1), *(beg + 2)),
                dist(*(beg + 2), *beg)});
  auto mid_point = *(beg + mid);
  long double d =
      min(min_distance(beg, beg + mid), min_distance(beg + mid, end));
  vector<pair<int, int>> strip;
  for (auto i = beg; i != end; ++i)
    if (abs(i->x - mid_point.x) < d)
      strip.pb(*i);
  sort(all(strip), [](auto &a, auto &b) { return a.y < b.y; });
  for (size_t i = 0; i < strip.size(); ++i)
    for (size_t j = i + 1; j < strip.size() and strip[j].y - strip[i].y < d;
         ++j)
      d = min(d, dist(strip[i], strip[j]));
  return d;
}

signed main() {
  vector<pair<int, int>> P(*iit);
  for (auto &&i : P)
    i = {*iit, *iit};
  sort(all(P));
  cout << fixed << setprecision(4) << min_distance(all(P));
}