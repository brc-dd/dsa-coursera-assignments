#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define input(v) for (auto &i : v) cin >> i;
#define int long long
using namespace std;
typedef vector<int> ints;
int solve(ints &v) {
    int p1(0), p2(0), n1(0), n2(0);
    for_each(all(v), [&p1, &p2, &n1, &n2](auto i) {
        if (i >= 0) {
            if (i > p1) {
                p2 = p1;
                p1 = i;
            } else if (i > p2)
                p2 = i;
        } else {
            if (i < n1) {
                n2 = n1;
                n1 = i;
            } else if (i < n2)
                n2 = i;
        }
    });
    return max(p1 * p2, n1 * n2);
}
int32_t main() {
    int n; cin >> n;
    ints v(n); input(v);
    cout << solve(v);
    return 0;
}