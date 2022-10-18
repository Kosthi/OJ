#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        int ch[1001] = {0};
        ch[1] = 1;
        ch[2] = 1;
        for (int i = 3; i <= a; i++) {
            ch[i] = (ch[i - 1] + ch[i - 2] - 1) % b + 1;
        }
        cout << (ch[a] - 1) << endl;
    }
}
