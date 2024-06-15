#include <bits/stdc++.h>
using namespace std;

uint64_t proc(vector<int> a, vector<int> b) {
    uint64_t ans  = 0;
    uint64_t diff = UINT64_MAX;
    for (size_t i = 0; i < a.size(); ++i) {
        ans += static_cast<uint64_t>((abs(a[i] - b[i])));
        if ((b.back() >= a[i] && b.back() <= b[i]) ||
            (b.back() <= a[i] && b.back() >= b[i])) {
            diff = 0;
        } else {
            diff = min(diff, static_cast<uint64_t>(abs(a[i] - b.back())));
            diff = min(diff, static_cast<uint64_t>(abs(b[i] - b.back())));
        }
    }
    return ans + 1 + diff;
}

int main() {
    int         t, n;
    vector<int> a, b;
    cin >> t;
    while (t--) {
        cin >> n;
        a.resize(n);
        b.resize(n + 1);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n + 1; ++i) {
            cin >> b[i];
        }
        cout << proc(a, b) << endl;
    }
    return 0;
}
