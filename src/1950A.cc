#include <iostream>
#include <string>
using namespace std;
// DONE
int main() {
    int n = 0, a = 0, b = 0, c = 0;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        string ans = (a < b && b < c)   ? "STAIR"
                     : (a < b && b > c) ? "PEAK"
                                        : "NONE";
        cout << ans << endl;
    }
    return 0;
}