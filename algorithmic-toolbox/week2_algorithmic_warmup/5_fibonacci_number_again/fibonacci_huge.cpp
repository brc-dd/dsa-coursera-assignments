#include <bits/stdc++.h>
#define int long long
using namespace std;
int solve(int n, int m) {
    int a = 0, b = 1, c;
    for (int i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 and b == 1) {
            c = i + 1;
            break;
        }
    }
    n %= c;
    if (n == 0)
        return 0;
    a = 0, b = 1;
    for (int i = 1; i < n; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
    }
    return (b % m);
}
int32_t main() {
    int n, m;
    cin >> n >> m;
    cout << solve(n, m);
    return 0;
}