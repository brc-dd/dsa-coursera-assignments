#include <bits/stdc++.h>
#define pb push_back
#define all(v) v.begin(), v.end()
using namespace std;
typedef vector<int> ints;
int minCoins(int m) {
    static int denominations[] = {10, 5, 1};
    ints v;
    for (auto i : denominations) {
        v.pb(m / i);
        m %= i;
    }
    return accumulate(all(v), 0);
}
int main() {
    int m;
    cin >> m;
    cout << minCoins(m);
    return 0;
}