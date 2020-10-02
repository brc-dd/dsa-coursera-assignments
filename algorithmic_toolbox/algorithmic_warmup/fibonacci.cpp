#include <cmath>
#include <iostream>
#include <iterator>
using namespace std;

#define int long long
#define iit istream_iterator<int>(cin)

signed main() {
  cout << (int)roundl(powl((1 + sqrtl(5)) / 2, *iit) / sqrtl(5));
}