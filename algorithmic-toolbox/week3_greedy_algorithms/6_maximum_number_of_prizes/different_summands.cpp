#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef vector<int> ints;
int32_t main() {
    int n, s, c = 1;
    cin >> n;
    s = n;
    ints v;
    while (s) {
        v.pb(c);
        s -= c++;
        if (c > s) {
            v.back() += s;
            s = 0;
        }
    }
    cout << v.size() << endl;
    for (auto &i : v)
        cout << i << " ";
    return 0;
}