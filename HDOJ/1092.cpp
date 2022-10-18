#include <iostream>

int main(void) {
    using namespace std;
    int num, sum = 0, cnt;
    while (scanf("%d", &cnt)) {
        if (!cnt) break;
        while (cnt--) {
            scanf("%d", &num);
            sum += num;
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
