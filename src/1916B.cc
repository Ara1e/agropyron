#include <bits/stdc++.h>
using namespace std;
// DONE

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
// lcm(a, b) = a * b / gcd(a, b)
int main() {
    int n, a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        if (a == 1) {
            cout << b * b << endl;
        } else {
            if (b % a == 0)
                cout << a / gcd(a, b) * b * (b / a) << endl;
            else
                cout << a / gcd(a, b) * b << endl;
        }
    }

    return 0;
}