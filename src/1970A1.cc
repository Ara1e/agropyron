#include <bits/stdc++.h>
using namespace std;
struct Item {
    uint32_t pfx_bal;
    uint32_t pos;
    char     par;

    Item() {
        pfx_bal = 0;
        pos     = 0;
        par     = ' ';
    }
};

int main() {
    string s;
    cin >> s;
    vector<Item> items;
    int          bal = 0;
    for (uint32_t i = 0; i < s.size(); ++i) {
        Item item;
        item.par     = s[i];
        item.pos     = i;
        item.pfx_bal = bal;
        items.emplace_back(item);
        bal += (s[i] == '(' ? 1 : -1);
    }
    sort(items.begin(), items.end(), [](Item a, Item b) {
        if (a.pfx_bal < b.pfx_bal) {
            return true;
        } else if (a.pfx_bal == b.pfx_bal) {
            return a.pos > b.pos;
        } else {
            return false;
        }
    });
    for (uint32_t i = 0; i < s.size(); ++i) {
        cout << items[i].par;
    }
    cout << endl;
    return 0;
}
