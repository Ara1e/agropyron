#include <bits/stdc++.h>
using namespace std;

int proc(const string &s) {
    int            ans = 0;
    map<char, int> mp;
    for (size_t i = 0; i < s.size(); ++i) {
        mp[s[i]]++;
    }
    for (auto &it : mp) {
        if (it.first - 'A' + 1 <= it.second) {
            ++ans;
        }
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
