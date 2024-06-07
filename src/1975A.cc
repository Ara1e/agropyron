#include <bits/stdc++.h>
using namespace std;

bool proc(vector<int> vec) {
    bool ans = false;
    for (size_t i = 0; i < vec.size() / 2; ++i) {
        bool flag = true;
        for (size_t j = i + 1; j < i + vec.size() / 2; ++j) {
            if (vec[j] < vec[j - 1]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            ans = true;
            break;
        }
    }

    return ans;
}

int main() {
    int t, n;
    cin >> t;
    vector<int> vec;
    while (t--) {
        cin >> n;
        vec.resize(n * 2);
        for (int i = 0; i < n * 2; ++i) {
            if (i < n)
                cin >> vec[i];
            else
                vec[i] = vec[i - n];
        }
        cout << (proc(vec) ? "Yes" : "No") << endl;
    }
    return 0;
}
