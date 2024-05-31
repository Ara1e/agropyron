#include <bits/stdc++.h>
using namespace std;
// DONE
int main() {
    int n = 0, x = 0, y = 0;
    cin >> n;
    while (n--) {
        cin >> x >> y;
        if (x > y) {
            cout << y << " " << x << endl;
        } else {
            cout << x << " " << y << endl;
        }
    }
    return 0;
}
