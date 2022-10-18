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

long long fac(int low, int up) {
    long long sum = 1;
    for (int i = up - low + 1; i <= up; i++) {
        sum *= i;
    }
    for (int i = 1; i <= low; i++) {
        sum /= i;
    }
    return sum;
}

int main() {
    int n, m, t;
    long long sum = 0;
    cin >> n >> m >> t;
    for (int i = 4; i <= n; i++) {
        int j = t - i;
        if (j < 1) break;
        sum += fac(i, n) * fac(j, m);
    }
    cout << sum << endl;
}
