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
  int s, p, c = 0;
  cin >> s >> p;
  vector<pair<int, int>> v(2 * s);
  vector<int> points(p);
  int x = 1;
  for (auto &&i : v) {
    cin >> i.first;
    i.second = (x *= -1);
  }
  for (auto &&i : points) {
    cin >> i;
    v.pb({i, 0});
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
