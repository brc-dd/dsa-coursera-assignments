#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define iit istream_iterator<int>(cin)
#define pb push_back

signed main() {
  int n = *iit, c = 1;
  vector<int> v;
  while (n) {
    v.pb(c);
    n -= c++;
    if (c > n) {
      v.back() += n;
      break;
    }
  }
  cout << v.size() << '\n';
  copy(all(v), ostream_iterator<int>(cout, " "));
}