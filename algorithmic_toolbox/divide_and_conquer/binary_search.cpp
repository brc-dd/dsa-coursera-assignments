#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define iit istream_iterator<int>(cin)

signed main() {
  vector<int> v(*iit);
  copy_n(iit, v.size(), v.begin());
  auto t = *iit;
  while (t--) {
    auto key = *iit;
    auto pos = lower_bound(all(v), key);
    cout << (*pos == key ? pos - v.begin() : -1) << ' ';
  }
}