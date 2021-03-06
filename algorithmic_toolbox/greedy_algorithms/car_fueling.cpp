#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define int long long
#define iit istream_iterator<int>(cin)
#define pb push_back

int solve(int d, int m, int n, vector<int> v) {
  int ctr = 0, l = 0;
  v.pb(d);
  for (int i = 0; i < n and l + m < d; ++i)
    if (v[i] > l + m) {
      ctr = -1;
      break;
    } else if (v[i + 1] > l + m) {
      l = v[i];
      ++ctr;
    }
  if (l + m < d)
    return -1;
  return ctr;
}

signed main() { cout << solve(*iit, *iit, *iit, vector<int>(iit, {})); }