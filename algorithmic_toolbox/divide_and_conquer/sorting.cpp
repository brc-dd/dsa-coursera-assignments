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
  vector<int> v(istream_iterator<int>(cin), {});
  sort(all(v));
  copy(all(v), ostream_iterator<int>(cout, " "));
}
