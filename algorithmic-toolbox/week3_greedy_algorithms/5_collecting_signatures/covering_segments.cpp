#include <bits/stdc++.h>
#define int long long
#define all(v) v.begin(), v.end()
#define pb push_back
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> ints;
typedef vector<pii> pairs;
int32_t main() {
    int n;
    cin >> n;
    pairs v(n);
    for (auto &i : v)
        cin >> i.second >> i.first;
    sort(all(v));
    ints r;
    int p = v[0].first;
    r.pb(p);
    for (auto &i : v)
        if (p > i.first or p < i.second)
            r.pb((p = i.first));
    cout << r.size() << endl;
    for (auto &i : r)
        cout << i << " ";
    return 0;
}