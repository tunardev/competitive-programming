#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ull unsigned long long
#define mod (int)(1e9+7)

int main() {
    ll a, b;
    cin >> a >> b;
    
    int x = 0, y = 0;
    while (a) {
        x *= 10;
        x += (a % 10);
        a /= 10;
    }
    while (b) {
        y *= 10;
        y += (b % 10);
        b /= 10;
    }
    if (x > y) {
        cout << x;
    } else {
        cout << y;
    }
    cout << '\n';
}