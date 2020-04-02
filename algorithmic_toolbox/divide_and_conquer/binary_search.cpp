#include <bits/stdc++.h>
#define int long long
#define all(v) v.begin(), v.end()
#define input(v)      \
    for (auto &i : v) \
    cin >> i
using namespace std;
typedef vector<int> ints;
int32_t main() {
    int n, t, key;
    cin >> n;
    ints v(n);
    input(v);
    cin >> t;
    while (t--) {
        cin >> key;
        auto pos = lower_bound(all(v), key);
        if (*pos == key)
            cout << pos - v.begin() << ' ';
        else
            cout << -1 << ' ';
    }
    return 0;
}