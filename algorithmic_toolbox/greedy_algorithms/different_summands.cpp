#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define print(v)      \
    for (auto &i : v) \
    cout << i << ' '
using namespace std;
typedef vector<int> ints;
int32_t main() {
    int n, c(1);
    cin >> n;
    ints v;
    while (n) {
        v.pb(c);
        n -= c++;
        if (c > n) {
            v.back() += n;
            break;
        }
    }
    cout << v.size() << endl;
    print(v);
    return 0;
}