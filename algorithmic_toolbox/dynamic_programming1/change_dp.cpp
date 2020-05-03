#include <bits/stdc++.h>
#define int long long
#undef INT_MAX
#define INT_MAX LLONG_MAX
using namespace std;
int32_t main() {
	int n, den[] = {1, 3, 4}, m = sizeof(den) / sizeof(den[0]);
	cin >> n;
	int dp[n + 1];
	dp[0] = 0;
	for (int i = 1; i <= n; i++)
		dp[i] = INT_MAX;
	for (int i = 1; i <= n; i++)
		for (int j = 0; j < m and den[j] <= i; j++)
			if (dp[i - den[j]] != INT_MAX and dp[i - den[j]] + 1 < dp[i])
				dp[i] = dp[i - den[j]] + 1;
	cout << dp[n];
	return 0;
}