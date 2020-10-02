#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define int long long
#define iit istream_iterator<int>(cin)

signed main() {
  int m = *iit, ans = 0;
  vector<int> denominations = {10, 5, 1};
  for (auto &&i : denominations) {
    ans += m / i;
    m %= i;
  }
  cout << ans;
}