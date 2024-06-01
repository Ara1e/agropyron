#include <bits/stdc++.h>
using namespace std;

uint64_t proc(string s) {
    uint64_t ans     = 0;
    uint64_t count_1 = 0;
    for (uint64_t i = 0; i < s.size(); ++i) {
        if (s[i] == '1') {
            count_1++;
        } else {
            if (count_1 > 0) ans += count_1 + 1;
        }
    }
    return ans;
}

int main() {
    int    t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        cout << proc(s) << endl;
    }

    return 0;
}
