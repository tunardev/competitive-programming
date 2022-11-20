#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a;
    cin >> n;
    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        cin >> a;
        cnt[a % 3]++;
    }
    int ans = cnt[0] + cnt[1] / 3 * 3 + cnt[2] / 3 * 3;
    cnt[1] -= (cnt[1] / 3 * 3);
    cnt[2] -= (cnt[2] / 3 * 3);

    ans += 2 * min(cnt[1], cnt[2]);
    cout << ans << '\n';
}
