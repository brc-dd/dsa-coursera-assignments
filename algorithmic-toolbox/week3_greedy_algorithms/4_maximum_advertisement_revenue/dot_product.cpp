#include <bits/stdc++.h>
#define int long long
#define all(v) v.begin(), v.end()
using namespace std;
typedef vector<int> ints;
int32_t main() {
    int n;
    cin >> n;
    ints a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    sort(all(a));
    sort(all(b));
    cout << inner_product(all(a), b.begin(), (int)0);
    return 0;
}