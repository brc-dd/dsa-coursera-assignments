#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef vector<string> strings;
int main() {
    int n;
    cin >> n;
    strings v(n);
    for (auto &i : v)
        cin >> i;
    sort(all(v), [](const auto &a, const auto &b) {
        return (a + b) > (b + a);
    });
    for (auto &i : v)
        cout << i;
    return 0;
}