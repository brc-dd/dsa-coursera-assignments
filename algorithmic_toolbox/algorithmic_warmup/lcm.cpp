#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;

#define int long long
#define iit istream_iterator<int>(cin)

signed main() {
  auto a = *iit, b = *iit;
  cout << (a * b) / __gcd(a, b);
}