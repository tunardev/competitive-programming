#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long n;
    cin >> n;
    
    int res = 0;
    while (n >= 10) {
        long long temp = n;
        while (temp % 5 == 0) {
            temp /= 5;
            res++;
        }
        n -= 10;
    }
    cout << res << '\n';
}
