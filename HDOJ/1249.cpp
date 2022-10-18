#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        cout << 3 * a * (a - 1) + 2 << endl;
    }
    return 0;
}
