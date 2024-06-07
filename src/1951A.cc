#include <bits/stdc++.h>
using namespace std;

int main() {
    int    t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        vector<int> vec;
        for (size_t i = 0; i < s.size(); ++i) {
            if (s[i] == '1') {
                vec.emplace_back(i);
            }
        }

        cout << (vec.size() % 2                              ? "No"
                 : (vec.size() == 2 && vec[0] == vec[1] - 1) ? "No"
                                                             : "Yes")
             << endl;
    }

    return 0;
}
