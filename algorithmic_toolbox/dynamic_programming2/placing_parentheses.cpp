#include <algorithm>
#include <cassert>
#include <climits>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

using std::max;
using std::min;
using std::pair;
using std::string;
using std::vector;

long long eval(long long a, long long b, char op) {
    if (op == '*') {
        return a * b;
    } else if (op == '+') {
        return a + b;
    } else if (op == '-') {
        return a - b;
    } else {
        assert(0);
    }
}

long long get_maximum_value(const string &exp) {
    int l = exp.size();
    int n = (l + 1) / 2;

    vector<vector<pair<long long, long long>>> dp(
        n, vector<pair<long long, long long>>(n));

    for (int i = 0; i < n; i++) dp[i][i] = {exp[2 * i] - '0', exp[2 * i] - '0'};

    for (int s = 0; s < n - 1; s++) {
        for (int i = 0; i < n - s - 1; i++) {
            int j = i + s + 1;

            std::pair<long long, long long> value = {LLONG_MAX, LLONG_MIN};

            for (int k = i; k < j; k++) {
                auto a = eval(dp[i][k].first, dp[k + 1][j].first,
                              exp[2 * k + 1]),
                     b = eval(dp[i][k].first, dp[k + 1][j].second,
                              exp[2 * k + 1]),
                     c = eval(dp[i][k].second, dp[k + 1][j].first,
                              exp[2 * k + 1]),
                     d = eval(dp[i][k].second, dp[k + 1][j].second,
                              exp[2 * k + 1]);

                value.first  = min({value.first, a, b, c, d});
                value.second = max({value.second, a, b, c, d});
            }

            dp[i][j] = value;
        }
    }

    return dp[0][n - 1].second;
}

int main() {
    string s;
    std::cin >> s;
    std::cout << get_maximum_value(s) << '\n';
}
