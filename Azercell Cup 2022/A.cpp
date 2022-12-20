#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b) cout << c;
    else if (a == c) cout << b;
    else cout << c;
    cout << "\n";
}