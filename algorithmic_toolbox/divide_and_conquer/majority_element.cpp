#include <bits/stdc++.h>
#define int long long
#define all(v) v.begin(), v.end()
#define input(v) for (auto &i : v) cin >> i
#define decl_read(v, n) ints v(n); input(v)
using namespace std;
typedef vector<int> ints;
int32_t main() {
    int n, m(0), c(0); cin >> n;
    decl_read(v, n);
    for (auto &i : v)
        if (c == 0) m = i, c = 1;
        else (m == i) ? c++ : c--;
    cout << (count(all(v), m) > n / 2);
    return 0;
}