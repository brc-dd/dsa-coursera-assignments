#include <bits/stdc++.h>
#define int long long
#define input(v)      \
    for (auto &i : v) \
    cin >> i
#define pb push_back
using namespace std;
typedef vector<int> ints;
int32_t main() {
    int d, m, n, ctr(0), c(0), l(0);
    cin >> d >> m >> n;
    ints v(n);
    input(v);
    v.pb(d);
    for (int i(0); (i < n) and (l + m < d); ++i) {
        if (v[i] > l + m) {
            ctr = -1;
            break;
        } else if (v[i + 1] > l + m) {
            l = v[i];
            ++ctr;
        }
    }
    if (l + m < d)
        ctr = -1;
    cout << ctr;
    return 0;
}