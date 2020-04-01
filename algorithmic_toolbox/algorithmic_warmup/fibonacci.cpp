#include <bits/stdc++.h>
#define int long long
#define round roundl
#define pow powl
using namespace std;
int32_t main() {
    int n; cin >> n;
    cout << round(pow((1 + sqrt(5)) / 2, n) / sqrt(5));
    return 0;
}