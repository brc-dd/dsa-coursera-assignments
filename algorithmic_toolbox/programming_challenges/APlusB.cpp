#include <iostream>
#include <iterator>
using namespace std;

#define int long long
#define iit istream_iterator<int>(cin)

signed main() { cout << *iit + *iit; }