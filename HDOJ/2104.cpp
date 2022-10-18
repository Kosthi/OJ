#include <iostream>
int gcd(int, int);

int main(void) {
    using namespace std;
    int m, n;
    while (cin >> m >> n) {
        if (n == -1 && m == -1) break;
        if (gcd(m, n) == 1) {
            cout << "YES" << endl;
        }
        else
            cout << "POOR Haha" << endl;
    }
    return 0;
}

int gcd(int a, int b) {
    while (b^=a^=b^=a%=b);
    return a;
}
