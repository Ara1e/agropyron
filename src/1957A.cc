#include <bits/stdc++.h>
using namespace std;

int main() {
    int                     t, n, tmp;
    unordered_map<int, int> sticks_map;
    cin >> t;
    while (t--) {
        cin >> n;
        sticks_map.clear();
        for (int i = 0; i < n; ++i) {
            cin >> tmp;
            sticks_map[tmp]++;
        }
        int ans = 0;
        for (auto [k, v] : sticks_map) {
            ans += v / 3;
        }

        cout << ans << endl;
    }
    return 0;
}
