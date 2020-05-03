#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define pb push_back
using namespace std;
int32_t main() {
	int n;
	cin >> n;
	int dp[n + 1] = {0};
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0) dp[i] = min(dp[i / 2] + 1, dp[i]);
		if (i % 3 == 0) dp[i] = min(dp[i / 3] + 1, dp[i]);
	}
	cout << dp[n] << '\n';
	int ptr = n;
	vector<int> seq;
	seq.pb(ptr);
	while (ptr != 1)
		seq.pb((ptr = (((ptr % 2) ? -1 : (ptr / 2)) == -1) ? ((((ptr % 3) ? -1 : (ptr / 3)) == -1) ? ((ptr - 1)) : (dp[(ptr - 1)] < dp[((ptr % 3) ? -1 : (ptr / 3))] ? (ptr - 1) : ((ptr % 3) ? -1 : (ptr / 3)))) : ((((ptr % 3) ? -1 : (ptr / 3)) == -1) ? (dp[(ptr - 1)] < dp[((ptr % 2) ? -1 : (ptr / 2))] ? (ptr - 1) : ((ptr % 2) ? -1 : (ptr / 2))) : (dp[(ptr - 1)] < dp[((ptr % 2) ? -1 : (ptr / 2))] ? (dp[(ptr - 1)] < dp[((ptr % 3) ? -1 : (ptr / 3))] ? (ptr - 1) : ((ptr % 3) ? -1 : (ptr / 3))) : (dp[((ptr % 2) ? -1 : (ptr / 2))] < dp[((ptr % 3) ? -1 : (ptr / 3))] ? ((ptr % 2) ? -1 : (ptr / 2)) : ((ptr % 3) ? -1 : (ptr / 3)))))));
	reverse(all(seq));
	for (auto &i : seq)
		cout << i << ' ';
	return 0;
}