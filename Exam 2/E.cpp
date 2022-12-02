#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define arr array
#define ull unsigned long long 
#define mod (int)(1e9+7)

map<int, int> A, B;

void numbers_factors(map<int, int> &M) {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        for (int j = 2; j*j <= x; j++) {
            while (x % j == 0) {
                x /= j;
                M[j]++;
            }
        }
        if (x > 1) M[x]++;
    }
}

int main() {
    numbers_factors(A);
    numbers_factors(B);

    ll ans = 1;
    bool flag = false;
    for (auto k: A) {
        if (B.count(k.first)) {
            int p = k.first;
            int r = min(A[p], B[p]);

            for (int i = 0; i < r; i++) {
                ans *= p;
                if (ans >= (1e9)) {
                    ans %= (int)(1e9);
                    flag = true;
                }
            }
        }
    }

    if (flag) {
        cout << setw(9) << setfill('0') << ans;
    } else {
        cout << ans;
    }
    cout << '\n';
}
