#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}
bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, s;
    cin >> m >> s;
    s /= gcd(s, m);

    while (!isPrime(s)) {
        ++m;
        s /= gcd(s, m);
    }

    if (s == 1) cout << m;
    else cout << (int)ceil(1.0 * (m + 1) / s) * s << '\n';
}
