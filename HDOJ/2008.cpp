#include <iostream>

int main(void) {
    using namespace std;
    int cnt;
    double n;
    int sum1, sum2, sum3;
    while (cin >> cnt) {
        if (!cnt) break;
        sum1 = 0, sum2 = 0, sum3 = 0;
        while (cnt--) {
            cin >> n;
            if (n > 0)
                sum3++;
            else if (n < 0)
                sum1++;
            else
                sum2++;
        }
        cout << sum1 << " " << sum2 << " " << sum3 << endl;
    }
}
