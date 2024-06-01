#include <bits/stdc++.h>
using namespace std;

int main() {
    int    t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        size_t cnt[2] = {0, 0}, len = 0;
        for (char c : s) ++cnt[c - '0'];
        for (char c : s)
            if (!cnt[(c - '0') ^ 1]--)
                cout << s.size() - len << endl;
            else
                ++len;
        if (len == s.size()) cout << 0 << endl;
    }
    return 0;
}
