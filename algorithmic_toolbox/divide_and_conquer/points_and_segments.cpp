#include <algorithm>
#include <iostream>
#include <map>
#include <utility>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define pb push_back

signed main() {
  int s, p, t, c = 0;
  cin >> s >> p;
  vector<pair<int, int>> v;
  vector<int> points(p);
  for (int i = 0, t; i < s; ++i) {
    cin >> t;
    v.pb({t, -1});
    cin >> t;
    v.pb({t, 1});
  }
  for (int i = 0; i < p; ++i) {
    cin >> t;
    v.pb({t, 0});
    points[i] = t;
  }
  sort(all(v));
  map<int, int> dict;
  for (auto &&i : v)
    if (i.second)
      c -= i.second;
    else
      dict[i.first] = c;
  for (auto &&i : points)
    cout << dict[i] << ' ';
}