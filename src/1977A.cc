#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        if (n < m || (n - m) % 2 == 1) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
