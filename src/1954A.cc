#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, k;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        int tmp = n % m == 0 ? n / m : n / m + 1;
        if (k >= n - tmp)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
