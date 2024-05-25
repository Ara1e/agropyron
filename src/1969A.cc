#include <bits/stdc++.h>
using namespace std;

size_t proc(const vector<size_t> &friends) {
    size_t ans = 0;
    for (size_t i = 1; i < friends.size(); ++i) {
        if (friends[friends[i]] == i) {
            ans++;
        }
    }
    if (ans == 0) {
        ans = 3;
    } else {
        ans = 2;
    }
    return ans;
}

int main() {
    size_t         t, n;
    vector<size_t> friends;
    cin >> t;
    while (t--) {
        cin >> n;
        friends.resize(n + 1, 0);
        for (size_t i = 1; i <= n; ++i) {
            cin >> friends[i];
        }
        cout << proc(friends) << endl;
    }
    return 0;
}
