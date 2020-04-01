#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef vector<int> ints;
int maxProduct(ints &v) {
    int p1 = 0, p2 = 0, n1 = 0, n2 = 0;
    for (auto i : v)
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
    return max(p1 * p2, n1 * n2);
}
int32_t main() {
    int n;
    cin >> n;
    ints v(n);
    for (auto &i : v)
        cin >> i;
    cout << maxProduct(v);
}