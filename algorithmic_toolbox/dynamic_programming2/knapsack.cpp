#include <iostream>
#include <vector>

using std::vector;

int optimal_weight(int W, const vector<int> &w) {
    int n = w.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1));
    for (int i = 0; i <= n; ++i)
        for (int j = 0; j <= W; ++j)
            if (i and j) {
                if (w[i - 1] <= j)
                    dp[i][j] = std::max(w[i - 1] + dp[i - 1][j - w[i - 1]],
                                        dp[i - 1][j]);
                else
                    dp[i][j] = dp[i - 1][j];
            }
    return dp[n][W];
}

int main() {
    int n, W;
    std::cin >> W >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++) {
        std::cin >> w[i];
    }
    std::cout << optimal_weight(W, w) << '\n';
}
