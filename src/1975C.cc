#include <bits/stdc++.h>
using namespace std;

string binary(int x) {
    string s = "";
    while (x) {
        if (x % 2 == 0)
            s = s + '0';
        else
            s = s + '1';
        x /= 2;
    }
    return s;
}

int main() {
    int t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        string      bin  = binary(x);
        bool        flag = false;
        size_t      r = 0, l = 0;
        vector<int> vec(32, 0);
        for (size_t i = 0; i < bin.size(); ++i) {
            if (bin[i] == '1') {
                if (!flag) r = i;
                flag = true;
                l    = i;
            } else {
                if (!flag) continue;
                vec[r]     = -1;
                vec[l + 1] = 1;
                flag       = false;
            }
        }
        if (flag) {
            vec[r]     = -1;
            vec[l + 1] = 1;
        }

        for (size_t i = 0; i < vec.size() - 1; ++i) {
            if (vec[i] == -1 && vec[i + 1] == 1) {
                vec[i]     = 1;
                vec[i + 1] = 0;
            } else if (vec[i] == 1 && vec[i + 1] == -1) {
                vec[i]     = -1;
                vec[i + 1] = 0;
            }
        }
        size_t p = 0;
        for (size_t i = vec.size(); i > 0; i--) {
            if (vec[i - 1] != 0) {
                p = i;
                break;
            }
        }
        cout << p << endl;
        for (size_t i = 0; i < p; ++i) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
