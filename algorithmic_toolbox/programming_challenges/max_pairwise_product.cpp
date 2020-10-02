#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define iit istream_iterator<int>(cin)

int solve(vector<int> v, int n) {
  sort(all(v));
  return max(v[0] * v[1], v[n - 2] * v[n - 1]);
}

signed main() {
  int n = *iit;
  cout << solve(vector<int>(iit, {}), n);
}
