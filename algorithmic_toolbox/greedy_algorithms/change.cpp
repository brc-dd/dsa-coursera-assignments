#include <iostream>
#include <vector>
using namespace std;

#define int long long

signed main() {
  int m, ans = 0;
  cin >> m;
  vector<int> denominations = {10, 5, 1};
  for (auto &&i : denominations) {
    ans += m / i;
    m %= i;
  }
  cout << ans;
}