#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string a, b;
    while (t--) {
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b << endl;
    }
    return 0;
}
