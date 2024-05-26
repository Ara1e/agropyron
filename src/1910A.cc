#include <bits/stdc++.h>
using namespace std;

string proc(const string &s) {
    for (size_t i = s.size(); i > 0; --i) {
        if (isdigit(s[i - 1]) && s[i - 1] != '0') {
            return s.substr(0, i - 1);
        }
    }
    return "";
}

int main() {
    int    t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        cout << proc(s) << endl;
    }
}
