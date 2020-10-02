#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

#define int long long
#define all(v) v.begin(), v.end()

signed main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &&i : v)
    cin >> i;
  sort(all(v));
  copy(all(v), ostream_iterator<int>(cout, " "));
}