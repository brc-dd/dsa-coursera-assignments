#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()

signed main() {
  int n;
  cin >> n;
  vector<int> a(istream_iterator<int>(cin), {}), b(istream_iterator<int>(cin), {});
  sort(all(a));
  sort(all(b));
  cout << inner_product(all(a), b.begin(), 0LL);
}
