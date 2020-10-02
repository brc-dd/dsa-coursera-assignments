#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()

signed main() {
  int n;
  cin >> n;
  vector<string> v(istream_iterator<string>(cin), {});
  sort(all(v), [](auto &a, auto &b) { return (a + b) > (b + a); });
  copy(all(v), ostream_iterator<string>(cout, ""));
}
