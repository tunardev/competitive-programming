#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long n;
    cin >> n;
    if (n&1) cout << "0\n";
    else {
        n /= 2;
        long long ans = 0;
        while (n) {
            ans += (n / 5);
            n /= 5;
        }
        cout << ans << '\n';
    }
}
