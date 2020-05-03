#include <bits/stdc++.h>
using namespace std;
int main() {
	string a, b;
	cin >> a >> b;
	int l1(a.size()), l2(b.size());
	int dp[2][l1 + 1] = {0};
	for (int i(0); i <= l1; ++i)
		dp[0][i] = i;
	for (int i(1); i <= l2; ++i)
		for (int j(0); j <= l1; ++j)
			if (!j)
				dp[i & 1][j] = i;
			else if (a[j - 1] == b[i - 1])
				dp[i & 1][j] = dp[(i - 1) & 1][j - 1];
			else
				dp[i & 1][j] = 1 + min(dp[(i - 1) & 1][j], min(dp[i & 1][j - 1], dp[(i - 1) & 1][j - 1]));
	cout << dp[l2 & 1][l1];
	return 0;
}