#include <bits/stdc++.h>
using namespace std;

int main() {
    uint64_t t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        size_t ans = 0;
        for (uint64_t i = 1; i <= m; ++i) {
            ans += (n + i) / (i * i);
        }
        cout << ans - 1 << endl;
    }
    return 0;
}
