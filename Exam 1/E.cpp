#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<vector<char>> a(n + 1, vector<char>(n + 1));
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cin >> a[i][j]; 
        }
    }

    vector<vector<string>> dp(n + 1, vector<string>(n + 1, ""));
    dp[1][1] = a[1][1];
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == j && i == 1) {
                continue;
            } if (i == 1) {
                dp[i][j] = dp[i][j - 1] + a[i][j];
            } else if (j == 1) {
                dp[i][j] = dp[i - 1][j] + a[i][j];
            } else {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
            }
        }
    }
    cout << dp[n][n] << "\n";
}
