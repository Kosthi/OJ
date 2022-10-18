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
    long long num;
    cin >> n;
    while (n--) {
        long long cnt = 0;
        cin >> num;
        for (long long i = 1, j; i <= num; i = j + 1) {
            j = num / (num / i);
            // cout << j << endl;
            cnt += (num / i) * (j - i + 1);
        }
        cout << cnt << endl;
    }
}
