#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef pair<int, int> pii;
typedef vector<pii> pairs;
double knapsackSolver(int W, pairs &V) {
    sort(all(V), [](const auto &a, const auto &b) {
        return (double)a.first / a.second > (double)b.first / b.second;
    });
    int c = 0;
    double f = 0;
    for (auto &i : V) {
        if (c + i.second <= W) {
            c += i.second;
            f += i.first;
        } else {
            int r = W - c;
            f += i.first * ((double)r / i.second);
            break;
        }
    }
    return f;
}
int main() {
    int n, W;
    cin >> n >> W;
    pairs V(n);
    for (auto &i : V)
        cin >> i.first >> i.second;
    cout << fixed << setprecision(4) << knapsackSolver(W, V);
    return 0;
}