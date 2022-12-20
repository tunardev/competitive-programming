#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, count = 0;
    cin >> n;
    stack<int> st;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        while (st.size() != 0 && st.top() > a) {
            st.pop();
        }
        if (st.size() != 0 && st.top() == a) continue;
        if (a != 0) {
            count++;
            st.push(a);
        }
    }
    cout << count << "\n";
}