#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define int long long
#define pb push_back

auto merge(const vector<int> &l, const vector<int> &r, int &c) {
  vector<int> res;
  size_t i = 0, j = 0;
  while (i < l.size() and j < r.size())
    if (l[i] <= r[j])
      res.pb(l[i++]);
    else {
      res.pb(r[j++]);
      c += (l.size() - i);
    }
  res.insert(res.end(), l.begin() + i, l.end());
  res.insert(res.end(), r.begin() + j, r.end());
  return res;
}

auto ms(vector<int> &v, int &c) {
  if (v.size() < 2)
    return v;
  int m = v.size() / 2;
  vector<int> l(v.begin(), v.begin() + m), r(v.begin() + m, v.end());
  return merge(ms(l, c), ms(r, c), c);
}

signed main() {
  int n;
  cin >> n;
  vector<int> v(istream_iterator<int>(cin), {});
  int c = 0;
  ms(v, c);
  cout << c;
}