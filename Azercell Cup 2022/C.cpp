#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s, k = "";
    set<string> st;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (isalpha(s[i])) continue;
        while (i < s.size() && isdigit(s[i])) {
            k += s[i];
            i++;
        }
        st.insert(k);
        k.clear();
    }
    cout << st.size() << "\n";
}