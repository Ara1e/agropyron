#include <bits/stdc++.h>
using namespace std;

int proc(string &a, string &b) {
    int ans = 0;
    int ptr = -1;
    for (int i = 0; i < static_cast<int>(a.size()); ++i) {
        bool flag = false;
        for (int j = ptr + 1; j < static_cast<int>(b.size()); ++j) {
            if (b[j] == a[i]) {
                ptr  = j;
                flag = true;
                ans++;
                break;
            }
        }

        if (!flag) {
            return ans;
        }
    }

    return ans;
}

int main() {
    int    t, n, m;
    string a, b;
    cin >> t;
    while (t--) {
        cin >> n >> m >> a >> b;
        cout << proc(a, b) << endl;
    }

    return 0;
}
