#include <cmath>
#include <iostream>
using namespace std;

#define int long long

signed main() {
  int n;
  cin >> n;
  cout << (int)roundl(powl((1 + sqrtl(5)) / 2, n) / sqrtl(5));
}