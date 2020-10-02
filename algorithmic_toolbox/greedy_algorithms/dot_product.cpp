#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define iit istream_iterator<int>(cin)

signed main() {
  auto n = *iit;
  vector<int> a(n), b(n);
  copy_n(iit, n, a.begin());
  copy_n(iit, n, b.begin());
  sort(all(a));
  sort(all(b));
  cout << inner_product(all(a), b.begin(), 0LL);
}