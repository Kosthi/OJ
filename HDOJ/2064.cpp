#include <iostream>
#include <string>
#include <cmath>

#define PI 3.1415926535
long long gcd(long long, long long);
using namespace std;

long long f[36] = {0};

int main(void) {
    f[1] = 2;
    for (int i = 2; i <= 35; i++) {
        f[i] = 3 * f[i - 1] + 2;
    }
    int n;
    while (cin >> n) {
        //while (n--) {
            //int a;
            //cin >> a;
            // long long c = pow(3, n) - 1;
            cout << f[n] << endl;
        //}
    }
    return 0;
}

long long gcd(long long n, long long m) {
    int temp;
    temp = n % m;
    while (temp != 0) {
        n = m;
        m = temp;
        temp = n % m;
    }
    return m;
}
