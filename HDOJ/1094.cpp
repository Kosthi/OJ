#include <iostream>

int main(void) {
    using namespace std;
    int num, sum = 0, cnt;
    // cin用时比scanf短
    while (cin >> cnt) {
        for (int i = 0; i < cnt; i++) {
            cin >> num;
            sum += num;
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
