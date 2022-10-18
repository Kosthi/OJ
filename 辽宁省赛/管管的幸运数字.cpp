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
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int tmp = n;
        while (!gkd(n--));
        if (tmp - 1 == n) cout << "YES" << endl;
        else {
            int ln = n + 1;
            n = tmp;
            while (!gkd(n++));
            int rn = n - 1;
            cout << min(tmp - ln, rn - tmp) << endl;
        }
    }
}
