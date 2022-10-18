#include <iostream>

using namespace std;

int main(void) {
    int n;
    while (cin >> n) {
        while (n--) {
            int cnt;
            float max = 0;
            cin >> cnt;
            while (cnt--) {
                float num;
                cin >> num;
                if (num > max) max = num;
            }
            printf("%.2f\n", max);
        }
    }
    return 0;
}
