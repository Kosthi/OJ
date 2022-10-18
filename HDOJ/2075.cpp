#include <iostream>

using namespace std;

int main(void) {
    int n;
    while (cin >> n) {
        while (n--) {
            int a, b;
            cin >> a >> b;
            if (a < b) swap(a, b);
            if (!(a % b)) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    return 0;
}
