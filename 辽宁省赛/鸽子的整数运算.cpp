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
        int op, a, b;
        cin >> op >> a >> b;
        int out;
        switch(op) {
            case 1:
                out = a + b;
                break;
            case 2:
                out = a - b;
                break;
            case 3:
                out = a * b;
                break;
            case 4:
                out = a / b;
                break;
        }
        cout << out << endl;
    }
}
