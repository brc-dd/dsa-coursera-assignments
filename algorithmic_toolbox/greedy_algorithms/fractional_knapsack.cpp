#include <bits/stdc++.h>
#define int long long
#define all(v) v.begin(), v.end()
#define fir first
#define se second
#define input_vp(v)   \
    for (auto &i : v) \
    cin >> i.fir >> i.se
using namespace std;
typedef pair<int, int> pii;
typedef vector<pii> pairs;
int32_t main() {
    int n, W, c(0), r;
    double f(0);
    cin >> n >> W;
    pairs V(n);
    input_vp(V);
    sort(all(V), [](auto &a, auto &b) {
        return (double)a.fir / a.se > (double)b.fir / b.se;
    });
    for (auto &i : V) {
        if (c + i.se <= W) {
            c += i.se;
            f += i.fir;
        } else {
            r = W - c;
            f += i.fir * ((double)r / i.se);
            break;
        }
    }
    cout << fixed << setprecision(4) << f;
    return 0;
}