#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()

signed main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (auto &&i : a)
    cin >> i;
  for (auto &&i : b)
    cin >> i;
  sort(all(a));
  sort(all(b));
  cout << inner_product(all(a), b.begin(), 0LL);
}