#include <iostream>
#include <string>
using namespace std;
// DONE
size_t diff_pos_with_first_letter(const string &line) {
    for (size_t i = 1; i < line.size(); i++) {
        if (line[i] != line[0]) {
            return i;
        }
    }
    return 0;
}

int main() {
    int    n    = 0;
    string line = "";
    cin >> n;
    while (n--) {
        cin >> line;
        size_t diif_pos = diff_pos_with_first_letter(line);
        if (diif_pos == 0) {
            cout << "NO" << endl;
        } else {
            char first     = line[0];
            line[0]        = line[diif_pos];
            line[diif_pos] = first;
            cout << "YES" << endl;
            cout << line << endl;
        }
    }
    return 0;
}
