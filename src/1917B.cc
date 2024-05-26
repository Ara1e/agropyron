#include <bits/stdc++.h>
using namespace std;

size_t proc(const string &s) {
    size_t    ans = 0;
    set<char> st;
    for (size_t i = 0; i < s.size(); ++i) {
        if (!st.count(s[i])) {
            st.insert(s[i]);
        }
        ans += st.size();
    }
    return ans;
}

int main() {
    int    t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> s;
        cout << proc(s) << endl;
    }
    return 0;
}
