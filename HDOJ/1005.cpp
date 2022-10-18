#include <iostream>

using namespace std;

int f[50] = {0};
int main(void) {
    
    int a, b, n;
    while (cin >> a >> b >> n && a + b + n) {
        f[1] = 1;
        f[2] = 1;
        for (int i = 3; i <= 49; i++) {
            f[i] = (a * f[i - 1] + b * f[i - 2]) % 7;
        }
        cout << f[n % 49] << endl;
    }
    return 0;
}
