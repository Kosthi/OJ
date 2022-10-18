#include <iostream>

int convert(int, int);

using namespace std;

int main(void) {
    int n;
    while (cin >> n) {
        if (!n) break;
        if (convert(n, 10) == convert(n, 16) && convert(n, 10) == convert(n, 12)) {
            cout << n << " is a Sky Number." << endl;
        } else {
            cout << n << " is not a Sky Number." << endl;
        }
    }
    return 0;
}

int convert(int n, int q) {
    int i = 0, ch[4] = {0};
    while (n) {
        ch[i++] = n % q;
        n /= q;
    }
    return ch[0] + ch[1] + ch[2] + ch[3];
}
