#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()

signed main() {
  int n, t, key;
  cin >> n;
  vector<int> v(n);
  copy_n(istream_iterator<int>(cin), n, v.begin());
  cin >> t;
  while (t--) {
    cin >> key;
    auto pos = lower_bound(all(v), key);
    cout << (*pos == key ? pos - v.begin() : -1) << ' ';
  }
}
