#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define iit istream_iterator<int>(cin)

signed main() {
  *iit;
  vector<int> v(iit, {});
  sort(all(v));
  copy(all(v), ostream_iterator<int>(cout, " "));
}