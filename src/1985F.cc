#include <bits/stdc++.h>
using namespace std;

uint64_t proc(uint64_t h, vector<uint64_t> dms, vector<uint64_t> cds) {
    uint64_t l = 1, r = 4e12, mid = 0, tmp = 0;
    while (l < r) {
        mid = (r - l) / 2 + l;
        tmp = 0;
        for (size_t i = 0; i < dms.size(); ++i) {
            tmp += ((mid - 1) / cds[i] + 1) * dms[i];
        }
        if (tmp < h) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }

    return l;
}

int main() {
    uint64_t         t, h, n;
    vector<uint64_t> damages;
    vector<uint64_t> cooldowns;
    cin >> t;
    while (t--) {
        cin >> h >> n;
        damages.resize(n);
        cooldowns.resize(n);
        for (uint64_t i = 0; i < n; ++i) {
            cin >> damages[i];
        }
        for (uint64_t i = 0; i < n; ++i) {
            cin >> cooldowns[i];
        }
        auto ans = proc(h, damages, cooldowns);
        cout << ans << endl;
    }
    return 0;
}
