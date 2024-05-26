#include <bits/stdc++.h>
using namespace std;

int proc(const string &s) {
    int count = 0;
    int ans   = 0;
    for (size_t i = s.size(); i > 0; --i) {
        if (s[i - 1] == 'B') {
            count++;
        } else {
            ans += count;
            count = min(count, 1);
        }
    }
    return ans;
}

int main() {
    int    t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        cout << proc(s) << endl;
    }
}
