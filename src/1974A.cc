#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y;
    cin >> t;
    const int grid_size = 5 * 3;
    while (t--) {
        cin >> x >> y;
        if (x == 0 && y == 0) {
            cout << 0 << endl;
            continue;
        }
        int tmp = 0;
        tmp     = (y - 1) / 2 + 1;
        if (grid_size * tmp >= x + 4 * y) {
            cout << tmp << endl;
        } else {
            cout << tmp + (x - (grid_size * tmp - 4 * y) - 1) / grid_size + 1
                 << endl;
        }
    }
    return 0;
}
