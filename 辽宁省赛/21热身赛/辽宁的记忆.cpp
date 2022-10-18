#include <iostream>
#include <unordered_map>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int gcd (int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int gkd (int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        cout << 1946 + a << endl;
    }
}
