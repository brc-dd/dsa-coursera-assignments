#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define input(v) for(auto &i : v) cin >> i
#define print_nospace(v) for(auto &i : v) cout << i
#define int long long
using namespace std;
typedef vector<string> strings;
int32_t main() {
    int n;
    cin >> n;
    strings v(n);
    input(v);
    sort(all(v), [](auto &a, auto &b) {
        return (a + b) > (b + a);
    });
    print_nospace(v);
    return 0;
}