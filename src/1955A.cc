#include <bits/stdc++.h>
using namespace std;
// DONE
int main() {
    int t, n, a, b;
    cin >> t;
    while (t--) {
        cin >> n >> a >> b;
        if (a * 2 <= b) {
            cout << a * 2 * (n / 2) + a * (n % 2) << endl;
        } else {
            cout << b * (n / 2) + a * (n % 2) << endl;
        }
    }

    return 0;
}