#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ull unsigned long long
#define mod (int)(1e9+7)

int main() {
    int n, temp, res = 0;
    cin >> n;
    temp = n;
    while (n % 5 && n > 0) {
        n -= 3;
        res++;
    }
    if (n <= 0 && res * 3 != temp) {
        cout << "-1\n";
        return 0;
    }
    cout << res + (n / 5) << '\n';
}