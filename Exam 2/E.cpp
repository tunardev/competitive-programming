#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ull long long
#define mod (int)(1e9+7)

int main() {
    int n, m;
    cin >> n >> m;
    map<int, int> cnt, cnt2;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
        cnt2[b[i]]++;
    }

    map<int, int> mp, mp2;
    for (auto k: cnt) {
        int x = k.first, y = k.second;
        for (int i = 2; i * i <= x; ++i) {
            if (x % i == 0) {
                while (x % i == 0) {
                    mp[i] += y;
                    x /= i;
                }
            }
        }

        if (x > 1) {
            mp[x] += y;
        }
    }
    for (auto k: cnt2) {
        int x = k.first, y = k.second;
        for (int i = 2; i * i <= x; ++i) {
            if (x % i == 0) {
                while (x % i == 0) {
                    mp2[i] += y;
                    x /= i;
                }
            }
        }

        if (x > 1) {
            mp2[x] += y;
        }
    }
    
    ull ans = 1;
    for (auto k: mp) {
        int x = k.first;
        int z = mp[x], p = mp2[x];
        if (min(z, p) == z) {
            for (int i = 0; i < z; ++i) {
                ans *= x;
            } 
        } else if (min(z, p) == p) {
            for (int i = 0; i < p; ++i) {
                ans *= x;
            }
        }
    }

    if (ans >= 1e8){        
        vector<int> r;
        while (ans) {
            r.push_back(ans % 10);
            ans /= 10;
        }
        vector<int> p;
        for (int i = 0; i < 9; ++i) {
            p.push_back(r[i]);
        }
        reverse(p.begin(), p.end());
        for (int i = 0; i < 9; ++i) {
            cout << p[i];
        }
    } else {
        cout << ans;
    }
    cout << '\n';
}