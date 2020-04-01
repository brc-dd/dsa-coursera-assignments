#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    int fib[] = {0, 1, 1, 2, 3, 5, 8, 3, 1, 4, 5, 9, 4, 3, 7, 0, 7, 7, 4, 1, 5, 6, 1, 7, 8, 5, 3, 8, 1, 9, 0, 9, 9, 8, 7, 5, 2, 7, 9, 6, 5, 1, 6, 7, 3, 0, 3, 3, 6, 9, 5, 4, 9, 3, 2, 5, 7, 2, 9, 1}, n, m;
    cin >> n >> m;
    n = (n + 1) % 60;
    m = (m + 2) % 60;
    int sumN, sumM;
    sumN = fib[n] ? fib[n] % 10 - 1 : 9;
    sumM = fib[m] ? fib[m] % 10 - 1 : 9;
    int z = sumM - sumN;
    z += (z < 0) ? 10 : 0;
    cout << z;
    return 0;
}