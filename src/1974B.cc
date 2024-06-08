#include <bits/stdc++.h>
using namespace std;

string proc(string &b) {
    string          s(b.size(), ' ');
    map<char, char> ci;
    for (auto c : b) {
        ci[c] = c;
    }
    auto rb = ci.rbegin();
    for (auto be = ci.begin(); be != ci.end(); ++be, ++rb) {
        be->second = rb->first;
        rb->second = be->first;
    }

    for (size_t i = 0; i < b.size(); ++i) {
        s[i] = ci[b[i]];
    }

    return s;
}

int main() {
    int    t, n;
    string b;
    cin >> t;
    while (t--) {
        cin >> n >> b;
        cout << proc(b) << endl;
    }
    return 0;
}
