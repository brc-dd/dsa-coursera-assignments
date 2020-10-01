#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int lcs3(vector<int> &a, vector<int> &b, vector<int> &c) {
    int n = a.size(), m = b.size(), l = c.size();
    vector<vector<vector<int>>> dp(
        n + 1, vector<vector<int>>(m + 1, vector<int>(l + 1)));
    for (int i = 0; i <= n; ++i)
        for (int j = 0; j <= m; ++j)
            for (int k = 0; k <= l; ++k)
                if (i and j and k) {
                    if (a[i - 1] == b[j - 1] and b[j - 1] == c[k - 1])
                        dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                    else
                        dp[i][j][k] =
                            std::max({dp[i - 1][j][k], dp[i][j - 1][k],
                                      dp[i][j][k - 1]});
                }
    return dp[n][m][l];
}

int main() {
    size_t an;
    std::cin >> an;
    vector<int> a(an);
    for (size_t i = 0; i < an; i++) {
        std::cin >> a[i];
    }
    size_t bn;
    std::cin >> bn;
    vector<int> b(bn);
    for (size_t i = 0; i < bn; i++) {
        std::cin >> b[i];
    }
    size_t cn;
    std::cin >> cn;
    vector<int> c(cn);
    for (size_t i = 0; i < cn; i++) {
        std::cin >> c[i];
    }
    std::cout << lcs3(a, b, c) << std::endl;
}
