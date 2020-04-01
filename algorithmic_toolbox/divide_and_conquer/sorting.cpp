#include <bits/stdc++.h>
#define int long long
#define all(v) v.begin(), v.end()
#define input(v) for (auto &i : v) cin >> i
#define decl_read(v, n) ints v(n); input(v)
#define print(v) for (auto &i : v) cout << i << " "
using namespace std;
typedef vector<int> ints;
using namespace std;
int32_t main() {
    int n; cin >> n;
    decl_read(v, n);
    sort(all(v));
    print(v);
    return 0;
}