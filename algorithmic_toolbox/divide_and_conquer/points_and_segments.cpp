#include <bits/stdc++.h>
#define int long long
#define all(v) v.begin(), v.end()
#define input(v)      \
    for (auto &i : v) \
    cin >> i
#define decl_read(v, n) \
    ints v(n);          \
    input(v)
#define print(v)      \
    for (auto &i : v) \
    cout << i << ' '
#define pb push_back
#define mp make_pair
#define fir first
#define se second
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> ints;
typedef vector<pii> pairs;
int32_t main() {
    int s, p, t, c(0);
    cin >> s >> p;
    pairs v;
    ints points(p);
    for (int i(0); i < s; i++) {
        cin >> t;
        v.pb(mp(t, 1));
        cin >> t;
        v.pb(mp(t, -1));
    }
    for (int i(0); i < p; i++) {
        cin >> t;
        v.pb(mp(t, 0));
        points[i] = t;
    }
    sort(all(v));
    map<int, int> dict;
    for (auto &i : v)
        if (i.se)
            c += i.se;
        else
            dict[i.fir] = c;

    for (auto &i : points)
        cout << dict[i] << ' ';
    return 0;
}