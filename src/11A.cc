#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, d, tmp, dis = 0;
    int ans = 0, last = -1;
    cin >> n >> d;
    while (n--) {
        cin >> tmp;
        if (last > 0 && tmp < last) {
            dis = (last - tmp - 1) / d + 1;
            ans += dis;
            tmp += dis * d;
        }
        if (tmp == last) {
            ans += 1;
            tmp += d;
        }
        last = tmp;
    }
    cout << ans << endl;
    return 0;
}
