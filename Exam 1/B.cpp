#include <bits/stdc++.h>
using namespace std;

long long dp[26][26];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i <= 25; i++) {
        for (int j = 0; j <= 25; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 1;
            } else if (i <= j) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1] + 1;
            } else {
                dp[i][j] = dp[i][j/2] + 2;
            }
        }
    }

    int x, y;
    cin >> x >> y;
    cout << dp[x][y] << '\n';
}