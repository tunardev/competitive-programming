#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << "1\n";
    } else {
        int mx = 0, l = 0, r = 0;
        vector<bool> vis(1e9 + 1, false);
        while (r < n) {
            if (vis[a[r]] == false) vis[a[r]] = true;
            else {
                mx = max(mx, (r - l));
                while (l < r) {
                    if (a[l] != a[r]) vis[a[l]] = false;
                    else {
                        l++;
                        break;
                    }
                    l++;
                }
            }
            r++;
        }

        mx = max(mx, (r - l));
        cout << mx << "\n";
    }
}
