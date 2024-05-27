#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n % 2) {
            cout << "NO" << endl;
        } else {
            string tmp = "";
            while (n > 0) {
                tmp += (tmp.size() % 4 == 0) ? "AA" : "BB";
                n -= 2;
            }
            cout << "YES" << endl;
            cout << tmp << endl;
        }
    }

    return 0;
}
