#include <bits/stdc++.h>
using namespace std;

uint64_t proc(uint64_t h, vector<uint64_t> dms, vector<uint64_t> cds) {
    uint64_t current = 1;
    uint64_t tmp = 0;
    map<uint64_t, vector<pair<uint64_t, uint64_t>>> mp;
    for (uint64_t i = 0; i < dms.size(); ++i) {
        mp[1].push_back({dms[i], cds[i]});
    }

    while (tmp < h) {
        auto vec = mp.begin();
        current = vec->first;
        for (auto p : vec->second) {
            tmp += p.first;
            mp[current + p.second].push_back(p);
        }
        mp.erase(vec);
    }
    return current;
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
