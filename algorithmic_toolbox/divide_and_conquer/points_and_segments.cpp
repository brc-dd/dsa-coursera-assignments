#include <algorithm>
#include <iostream>
#include <map>
#include <utility>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define iit istream_iterator<int>(cin)
#define pb push_back

signed main() {
  int c = 0;
  vector<pair<int, int>> v(2 * *iit);
  vector<int> points(*iit);
  int x = 1;
  for (auto &&i : v)
    i = {*iit, x *= -1};
  for (auto &&i : points)
    v.pb({*iit, 0});
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