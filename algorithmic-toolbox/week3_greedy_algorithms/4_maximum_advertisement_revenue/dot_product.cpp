#include <bits/stdc++.h>
#define int long long
#define all(v) v.begin(), v.end()
#define input(v) for(auto &i : v) cin >> i
using namespace std;
typedef vector<int> ints;
int32_t main() {
    int n; cin >> n;
    ints a(n), b(n);
    input(a); input(b);
    sort(all(a)); sort(all(b));
    cout << inner_product(all(a), b.begin(), (int)0);
    return 0;
}