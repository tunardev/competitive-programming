#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ull unsigned long long
#define mod (int)(1e9+7)

int main() {
    string s;
    cin >> s;
    
    bool flag = false;
    for (int i = 0; i < s.size(); ++i) {
        if (!flag) {
            cout << s[i];
            flag = true;
        }
        if (s[i] == '-') {
            flag = false;
        }
    }
}


