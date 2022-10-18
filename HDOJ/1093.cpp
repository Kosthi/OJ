#include <iostream>

int main(void) {
    using namespace std;
    int num, sum = 0, cnt;
    int lines;
    cin >> lines;
    while (scanf("%d", &cnt)) {
        if (!cnt) break;
        while (cnt--) {
            scanf("%d", &num);
            sum += num;
        }
        cout << sum << endl;
        if (!--lines) break;
        sum = 0;
    }
    return 0;
}
