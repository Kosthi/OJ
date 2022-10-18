#include <iostream>

int gcd(int, int);

using namespace std;
int main(void) {
    int n, a, b;
    while (cin >> n) {
        while (n--) {
            cin >> a >> b;
            int k = b * 2, i = 3;
            while (gcd(a, k) != b) {
                k = b * i;
                i++;
            }
            cout << k << endl;
        }
    }
}

int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}
