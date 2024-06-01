#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b, ans = 0;
    cin >> n >> m;
    map<int, int, greater<int>> dict;

    while (m--) {
        cin >> a >> b;
        dict[b] += a;
    }

    for (auto begin = dict.begin(); begin != dict.end(); ++begin) {
        if (n > 0) {
            ans += min(n, begin->second) * begin->first;
            n -= min(n, begin->second);
        } else {
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
