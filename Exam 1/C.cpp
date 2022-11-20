#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<long long> dp(n + 3, 0);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i <= n; ++i) {
        dp[i] = ((dp[i - 1] + (i - 1) * dp[i - 2]) % MOD);
    }
    cout << dp[n] << '\n';
}
