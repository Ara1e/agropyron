#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        uint32_t max_pieces = 1;
        bool     flag       = false;
        for (uint32_t i = 0; i < s.size() - 1; ++i) {
            if (s[i] != s[i + 1]) {
                ++max_pieces;
                if (s[i] == '0') {
                    flag = true;
                }
            }
        }
        cout << (flag ? max_pieces - 1 : max_pieces) << endl;
    }
}
