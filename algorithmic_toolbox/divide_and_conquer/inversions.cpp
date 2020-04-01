#include <bits/stdc++.h>
#define int long long
#define all(v) v.begin(), v.end()
#define input(v) for (auto &i : v) cin >> i
#define decl_read(v, n) ints v(n); input(v)
#define print(v) for (auto &i : v) cout << i << " "
#define pb push_back
using namespace std;
typedef vector<int> ints;
using namespace std;
ints merge(const ints &l, const ints &r, int &c) {
    ints res;
    int i(0), j(0);
    while (i < l.size() && j < r.size())
        if (l[i] <= r[j])
            res.pb(l[i++]);
        else {
            res.pb(r[j++]);
            c += (l.size() - i);
        }
    for (; i < l.size(); i++)
        res.pb(l[i]);
    for (; j < r.size(); j++)
        res.pb(r[j]);
    return res;
}
ints ms(ints &v, int &c) {
    if (v.size() < 2)
        return v;
    int m(v.size() / 2);
    ints l(v.begin(), v.begin() + m), r(v.begin() + m, v.end());
    return merge(ms(l, c), ms(r, c), c);
}
int32_t main() {
    int n;
    cin >> n;
    decl_read(v, n);
    int c = 0;
    ms(v, c);
    cout << c;
}