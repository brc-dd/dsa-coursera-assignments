#include <bits/stdc++.h>
using namespace std;
typedef vector<int> ints;
int main() {
    int d, m, n, ctr = 0, c = 0, l = 0;
    cin >> d >> m >> n;
    ints s(n);
    for (auto &i : s)
        cin >> i;
    s.push_back(d);
    for (int i = 0; (i < n) and (l + m < d); i++) {
        if (s[i] > l + m) {
            ctr = -1;
            break;
        } else if (s[i + 1] > l + m) {
            l = s[i];
            ctr++;
        }
    }
    if (l + m < d)
        ctr = -1;
    cout << ctr;
    return 0;
}