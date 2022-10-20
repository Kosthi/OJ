#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    while (num--) {
        int length, n, ma = 0, mi = 0;
        cin >> length >> n;
        while (n--) {
            int tmp;
            cin >> tmp;
            ma = max(max(tmp, length - tmp), ma);
            mi = max(min(tmp, length - tmp), mi);
        }
        cout << mi << " " << ma << endl;
    }
}
