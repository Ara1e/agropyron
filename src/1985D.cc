#include <bits/stdc++.h>
using namespace std;

pair<size_t, size_t> proc(const vector<vector<char>> &grids) {
    pair<size_t, size_t> ans;

    int m = 0;
    for (size_t i = 0; i < grids.size(); i++) {
        int tmp = 0;
        for (size_t j = 0; j < grids[i].size(); j++) {
            if (grids[i][j] == '#') {
                ++tmp;
            }
        }

        if (tmp > m) {
            m         = tmp;
            ans.first = i + 1;
        }
    }

    m = 0;
    for (size_t i = 0; i < grids[0].size(); i++) {
        int tmp = 0;
        for (size_t j = 0; j < grids.size(); j++) {
            if (grids[j][i] == '#') {
                ++tmp;
            }
        }

        if (tmp > m) {
            m          = tmp;
            ans.second = i + 1;
        }
    }

    return ans;
}

int main() {
    int t, n, m;
    cin >> t;
    vector<vector<char>> grids;
    while (t--) {
        cin >> n >> m;
        grids.clear();
        grids = vector<vector<char>>(n, vector<char>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grids[i][j];
            }
        }

        auto p = proc(grids);
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
