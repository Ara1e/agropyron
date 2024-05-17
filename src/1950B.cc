#include <iostream>
#include <string>
#include <vector>
using namespace std;

string upscaling(int w) {
    (void)w;
    return "";
}

int main() {
    int n = 0, w;
    cin >> n;
    while (n--) {
        cin >> w;
        cout << upscaling(2 * w);
    }
    return 0;
}