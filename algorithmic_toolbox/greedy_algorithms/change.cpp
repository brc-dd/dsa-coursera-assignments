#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, ans(0);
    cin >> m;
    int denominations[] = {10, 5, 1};
    for (auto &i : denominations) {
        ans += m / i;
        m %= i;
    }
    cout << ans;
    return 0;
}